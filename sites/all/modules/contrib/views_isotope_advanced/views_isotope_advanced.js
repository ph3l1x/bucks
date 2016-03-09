
Drupal.behaviors.isotopia = {
  attach: function (context) {
  
    if(Drupal.settings.isotopia) {

      (function($) {
        
        // Main functionality
        $(document).ready(function(){
          // Get isotope instances from drupal
          var instances = Drupal.settings.isotopia.instances;
          
          // For each instance
          $.each(instances, function(instance_id, instance) {
            
            //Find instance's selector
            $(instance.container_selector, context).each(function(){
              
              // Skip if not enabled
              if(instance.enabled != true) return;
              
              // Get ie version
              var ie = (function(){

                  var undef,
                      v = 3,
                      div = document.createElement('div'),
                      all = div.getElementsByTagName('i');

                  while (
                      div.innerHTML = '<!--[if gt IE ' + (++v) + ']><i></i><![endif]-->',
                      all[0]
                  );

                  return v > 4 ? v : undef;

              }());
              
              var $original = $(this);
              
              instance.additionalOptions = {};
              
              // Run js hooks
              $(document).trigger('dofinityIsotopePreprocess', [instance_id, instance]);
              $(document).trigger('dofinityIsotopePreprocess_'+instance_id, [instance_id, instance]);
              
              //Set visible items wrapper, do insert for animation
              if(instance.init_animation) {
                $original.append("<div class='displayed-isotope'></div>");
              } else {
                $('> *', $original).wrapAll("<div class='displayed-isotope'></div>");
              }
              
              
              var $container = $('.displayed-isotope', $original );
              instance.$container = $container;
              
              //Get items to insert if animation was enabled
              var $items;
              if(instance.init_animation) {
                $items = $(instance.item_selector, $original);
              }
              
              // Load isotope
              if(instance.wait_for_images) {
                if(ie) {
                  $(window).load(function(){
                    Drupal.isotopiaResize(instance_id, instance, $items);
                  });
                } else {
                  $original.imagesLoaded(function(){
                    Drupal.isotopiaResize(instance_id, instance, $items);
                  });
                }
              }else {
                Drupal.isotopiaResize(instance_id, instance, $items);
              }
              
              $container.addClass('loaded');
              
              // Relayout if window was resized
              $(window).smartresize(function(){
                Drupal.isotopiaResize(instance_id, instance);
              });
              
              // Relayout if orientation changes (mobile)
              $(window).bind("orientationchange", function() {
                Drupal.isotopiaResize(instance_id, instance);
              });
              
            }); // End of $(instance.container_selector, context).each()
            
          }); // End of $.each(instances...
          
        }); // End of $(document).ready()

        //Override Isotope Methods
        
        // modified Isotope methods for gutters in masonry
        $.Isotope.prototype._getMasonryGutterColumns = function() {
            var gutter = this.options.masonry && this.options.masonry.gutterWidth || 0;
            var containerWidth = this.element.width();

            this.masonry.columnWidth = this.options.masonry && this.options.masonry.columnWidth ||
            // or use the size of the first item
            this.$filteredAtoms.outerWidth(true) ||
            // if there's no items, use size of container
            containerWidth;

            this.masonry.columnWidth += gutter;

            this.masonry.cols = Math.floor((containerWidth + gutter) / this.masonry.columnWidth);
            this.masonry.cols = Math.max(this.masonry.cols, 1);
        };

        $.Isotope.prototype._masonryReset = function() {
            // layout-specific props
            this.masonry = {};
            // FIXME shouldn't have to call this again
            this._getMasonryGutterColumns();
            var i = this.masonry.cols;
            this.masonry.colYs = [];
            while (i--) {
                this.masonry.colYs.push(0);
            }
        };

        $.Isotope.prototype._masonryResizeChanged = function() {
            var prevSegments = this.masonry.cols;
            // update cols/rows
            this._getMasonryGutterColumns();
            // return if updated cols/rows is not equal to previous
            return (this.masonry.cols !== prevSegments);
        };

        $.Isotope.prototype._masonryPlaceBrick = function( $brick, setY ) {
            // get the minimum Y value from the columns
            var minimumY = Math.min.apply( Math, setY ),
            shortCol = 0;

            // Find index of short column, the first from the left
            for (var i=0, len = setY.length; i < len; i++) {
              if ( setY[i] === minimumY ) {
                shortCol = i;
                break;
              }
            }

            // position the brick
            var x,y;
            if(this.options.masonry.isRTL){
              x = (this.element.outerWidth(true) - $brick.outerWidth(true)) - (this[this.options.layoutMode].columnWidth * shortCol);
            }else{
              x = this.masonry.columnWidth * shortCol;
            }
            y = minimumY;
            this._pushPosition( $brick, x, y );

            // apply setHeight to necessary columns
            var setHeight = minimumY + $brick.outerHeight(true),
                setSpan = this.masonry.cols + 1 - len;
            for ( i=0; i < setSpan; i++ ) {
              this.masonry.colYs[ shortCol + i ] = setHeight;
            }

        };
        
        
        Drupal.isotopiaResize = function (instance_id, instance, insert) {
          var $container = instance.$container;
          
          var numOfColumns = 5;
          var gutterWidth = 15;
          
          // For each breakpoint in instance
          $.each(instance.breakpoints, function (bpNum, bpValues) {
            
            // Find current number of columns and gutter width
            if($(window).width() > bpValues.screen_width) {
              numOfColumns = bpValues.number_of_columns;
              gutterWidth = bpValues.gutter_width;
              if(gutterWidth.slice(-1) === '%') gutterWidth = $container.width() * (parseFloat(gutterWidth)/100.0);
              gutterWidth = parseInt(gutterWidth);
            }
            
          });
          
          // RTL detection
          var lang = $('html').attr('lang');
          var isRTL = (lang == 'he' || lang == 'ar') && instance.detect_rtl ? true : false;
          
          // Set isotope options. Column width caculated by container width, number of columns, and gutter width
          var options = $.extend({
            masonry: {
              gutterWidth: gutterWidth,
              columnWidth: parseInt(($container.width() - (numOfColumns-1) * gutterWidth) / numOfColumns),
              isRTL: isRTL
            }
          }, instance.additionalOptions);
          
          // Run js hooks
          $(document).trigger('dofinityIsotopeProcess', [instance_id, instance, options]);
          $(document).trigger('dofinityIsotopeProcess_'+instance_id, [instance_id, instance, options]);
          
          // Load isotope
          if(insert && instance.init_animation) {
            $container.isotope(options).isotope('insert', insert);
          } else {
            $container.isotope(options);
          }
          
        } // End of Drupal.isotopiaResize

      })(window[Drupal.settings.isotopia.jQuerySource]); // End of (function($)

    } // End of if(Drupal.settings.isotopia)
    
  } // End of attach
  
} //End of Drupal.behaviors.isotopia