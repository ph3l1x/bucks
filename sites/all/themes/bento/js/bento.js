

(function($){
$(document).ready(function() {
  
  $('.drawer-tab.closed1').click(function() {
     $('.region-drawer-wrapper.closed').addClass('open').removeClass('closed');
     return false;
   });
  
  $('.drawer-tab.open1').click(function() {
     $('.region-drawer-wrapper.open').addClass('closed').removeClass('open');

     return false;
   });

  
  $('.mobile.closed1').click(function() {
     $('.mobile-wrapper.closed').addClass('open').removeClass('closed');
     return false;
   });
  
  $('.mobile.open1').click(function() {
     $('.mobile-wrapper.open').addClass('closed').removeClass('open');


     return false;
   });
  $('.node-readmore').ready(function() {
     $('.node-readmore').addClass('glyphicon');


     return false;
   });


});
})(jQuery);



