

(function($){
	jQuery(document).ready(function(){
		jQuery('ul.sf-menu').superfish({
			popUpSelector: 'ul,.sf-mega',
			hoverClass: 'sfHover',
			pathClass: 'overrideThisToUse',
			pathLevels: 0,
			delay: 100,
			animation: {opacity: 'show'},
			animationOut: {opacity: 'hide'},
			speed: 'fast',
			speedOut: 'fast',
			cssArrows: true,
			disableHI: false,

		});
	});
})(jQuery);



