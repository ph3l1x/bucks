<?php
/**
* Implements hook_skinr_skin_PLUGIN_info().
*/


function bento_skinr_group_custom_info() {
  $groups['custom'] = array(
    'title' => t('Block Customization'),
    'description' => t('These options allow you to customize the block elements.'),
  );


  return $groups;


}


function bento_skinr_skin_custom_info() {


	/** border color 			**/
	  $skins['bento_border_color'] = array(
	    'title' => t('Border Color'),
	    'type' => 'select',
	    'default status' => 1,
	    'group' => 'custom',
	    'options' => array(
			'border_color_1' => array('title' => t('Red'), 		'class' => array('border-color-red')),
			'border_color_2' => array('title' => t('Orange'), 	'class' => array('border-color-orange')),
			'border_color_3' => array('title' => t('Yellow'), 	'class' => array('border-color-yellow')),
			'border_color_4' => array('title' => t('Green'), 	'class' => array('border-color-green')),
			'border_color_5' => array('title' => t('Blue'), 	'class' => array('border-color-blue')),
			'border_color_6' => array('title' => t('Purple'), 	'class' => array('border-color-purple')),
			'border_color_7' => array('title' => t('White'), 	'class' => array('border-color-white')),
			'border_color_8' => array('title' => t('Black'), 	'class' => array('border-color-black')),
			'border_color_9' => array('title' => t('Dark Gray'),'class' => array('border-color-darkgray')),
			'border_color_10' => array('title' => t('Light Gray'), 	'class' => array('border-color-lightgray')),
			'border_color_11' => array('title' => t('Medium Gray'), 'class=' => array('border-color-gray')),
	    ),
	  );

	/** border rounded corner 			**/
	$skins['bento_border_round'] = array(
	  'title' => t('Border Rounded Corner'),
	  'type' => 'select',
	  'default status' => 1,
	  'group' => 'custom',
	  'options' => array(
			'border_round_1' => array('title' => t('1px'), 	'class' => array('round-corners-1')),
			'border_round_2' => array('title' => t('2px'), 	'class' => array('round-corners-2')),
			'border_round_3' => array('title' => t('3px'), 	'class' => array('round-corners-3')),
			'border_round_4' => array('title' => t('4px'), 	'class' => array('round-corners-4')),
			'border_round_5' => array('title' => t('5px'), 	'class' => array('round-corners-5')),
			'border_round_6' => array('title' => t('6px'), 	'class' => array('round-corners-6')),
			'border_round_7' => array('title' => t('7px'), 	'class' => array('round-corners-7')),
			'border_round_8' => array('title' => t('8px'), 	'class' => array('round-corners-8')),
			'border_round_9' => array('title' => t('9px'),	'class' => array('round-corners-9')),
			'border_round_10' => array('title' => t('10px'),'class' => array('round-corners-10')),
			'border_round_11' => array('title' => t('11px'),'class' => array('round-corners-11')),
			'border_round_12' => array('title' => t('12px'),'class' => array('round-corners-12')),		
	  ),
	);


		/** border width 			**/
		$skins['bento_border_width'] = array(
		  'title' => t('Border Width'),
		  'type' => 'select',
		  'default status' => 1,
		  'group' => 'custom',
		  'options' => array(
				'border_width_1' => array('title' => t('1px'), 	'class' => array('border-width-1')),
				'border_width_2' => array('title' => t('2px'), 	'class' => array('border-width-2')),
				'border_width_3' => array('title' => t('3px'), 	'class' => array('border-width-3')),
				'border_width_4' => array('title' => t('4px'), 	'class' => array('border-width-4')),
				'border_width_5' => array('title' => t('5px'), 	'class' => array('border-width-5')),
		  ),
		);
		
		
		/** border shadow 			**/
		$skins['bento_border_shadow'] = array(
		  'title' => t('Border Shadow'),
		  'description' => 'It is a long list. Choose Black when you have a light background and choose White when you have a dark background.',
		  'type' => 'select',
		  'default status' => 1,
		  'group' => 'custom',
		  'options' => array(
				'border_shadow_do1' => array('title' => t('1px Outer - Black'), 	'class' => array('outer-shadow-1', 'dark')),
				'border_shadow_do2' => array('title' => t('2px Outer - Black'), 	'class' => array('outer-shadow-2', 'dark')),
				'border_shadow_do3' => array('title' => t('3px Outer - Black'), 	'class' => array('outer-shadow-3', 'dark')),
				'border_shadow_do4' => array('title' => t('4px Outer - Black'), 	'class' => array('outer-shadow-4', 'dark')),
				'border_shadow_do5' => array('title' => t('5px Outer - Black'), 	'class' => array('outer-shadow-5', 'dark')),
				'border_shadow_do6' => array('title' => t('6px Outer - Black'), 	'class' => array('outer-shadow-6', 'dark')),
				'border_shadow_do7' => array('title' => t('7px Outer - Black'), 	'class' => array('outer-shadow-7', 'dark')),
				'border_shadow_do8' => array('title' => t('8px Outer - Black'), 	'class' => array('outer-shadow-8', 'dark')),
				'border_shadow_do9' => array('title' => t('9px Outer - Black'), 	'class' => array('outer-shadow-9', 'dark')),		
				'border_shadow_di1' => array('title' => t('1px inner - Black'), 	'class' => array('inner-shadow-1', 'dark')),
				'border_shadow_di2' => array('title' => t('2px inner - Black'), 	'class' => array('inner-shadow-2', 'dark')),
				'border_shadow_di3' => array('title' => t('3px inner - Black'), 	'class' => array('inner-shadow-3', 'dark')),
				'border_shadow_di4' => array('title' => t('4px inner - Black'), 	'class' => array('inner-shadow-4', 'dark')),
				'border_shadow_di5' => array('title' => t('5px inner - Black'), 	'class' => array('inner-shadow-5', 'dark')),
				'border_shadow_di6' => array('title' => t('6px inner - Black'), 	'class' => array('inner-shadow-6', 'dark')),
				'border_shadow_di7' => array('title' => t('7px inner - Black'), 	'class' => array('inner-shadow-7', 'dark')),
				'border_shadow_di8' => array('title' => t('8px inner - Black'), 	'class' => array('inner-shadow-8', 'dark')),
				'border_shadow_di9' => array('title' => t('9px inner - Black'), 	'class' => array('inner-shadow-9', 'dark')),
				'border_shadow_lo1' => array('title' => t('1px Outer - White'), 	'class' => array('outer-shadow-1', 'light')),
				'border_shadow_lo2' => array('title' => t('2px Outer - White'), 	'class' => array('outer-shadow-2', 'light')),
				'border_shadow_lo3' => array('title' => t('3px Outer - White'), 	'class' => array('outer-shadow-3', 'light')),
				'border_shadow_lo4' => array('title' => t('4px Outer - White'), 	'class' => array('outer-shadow-4', 'light')),
				'border_shadow_lo5' => array('title' => t('5px Outer - White'), 	'class' => array('outer-shadow-5', 'light')),
				'border_shadow_lo6' => array('title' => t('6px Outer - White'), 	'class' => array('outer-shadow-6', 'light')),
				'border_shadow_lo7' => array('title' => t('7px Outer - White'), 	'class' => array('outer-shadow-7', 'light')),
				'border_shadow_lo8' => array('title' => t('8px Outer - White'), 	'class' => array('outer-shadow-8', 'light')),
				'border_shadow_lo9' => array('title' => t('9px Outer - White'), 	'class' => array('outer-shadow-9', 'light')),		
				'border_shadow_li1' => array('title' => t('1px inner - White'), 	'class' => array('inner-shadow-1', 'light')),
				'border_shadow_li2' => array('title' => t('2px inner - White'), 	'class' => array('inner-shadow-2', 'light')),
				'border_shadow_li3' => array('title' => t('3px inner - White'), 	'class' => array('inner-shadow-3', 'light')),
				'border_shadow_li4' => array('title' => t('4px inner - White'), 	'class' => array('inner-shadow-4', 'light')),
				'border_shadow_li5' => array('title' => t('5px inner - White'), 	'class' => array('inner-shadow-5', 'light')),
				'border_shadow_li6' => array('title' => t('6px inner - White'), 	'class' => array('inner-shadow-6', 'light')),
				'border_shadow_li7' => array('title' => t('7px inner - White'), 	'class' => array('inner-shadow-7', 'light')),
				'border_shadow_li8' => array('title' => t('8px inner - White'), 	'class' => array('inner-shadow-8', 'light')),
				'border_shadow_li9' => array('title' => t('9px inner - White'), 	'class' => array('inner-shadow-9', 'light')),
		  ),
		);
		
		/** border style 			**/
		$skins['bento_border_style'] = array(
		  'title' => t('Border Style'),
		  'description' => 'Note: If you do not select a border style, your border will appear solid by default.',
		  'type' => 'select',
		  'default status' => 1,
		  'group' => 'custom',
		  'options' => array(
				'border_style_1' => array('title' => t('Dotted'), 	'class' => array('border-style-dotted')),
				'border_style_2' => array('title' => t('Dashed'), 	'class' => array('border-style-dashed')),
				'border_style_3' => array('title' => t('Double'), 	'class' => array('border-style-double')),
		  ),
		);
		
		
		/** box padding 			**/
		$skins['bento_box_padding'] = array(
		  'title' => t('Box Padding'),
		  'description' => 'If you have a box shading or a border, you should add some padding so it looks good.',
		  'type' => 'select',
		  'default status' => 1,
		  'group' => 'custom',
		  'options' => array(
				'box_padding_1' => array('title' => t('Padding 5px'), 	'class' => array('block-padding-5px')),
				'box_padding_2' => array('title' => t('Padding 10px'), 	'class' => array('block-padding-10px')),
				'box_padding_3' => array('title' => t('Padding 15px'), 	'class' => array('block-padding-15px')),
				'box_padding_4' => array('title' => t('Padding 20px'), 	'class' => array('block-padding-20px')),
				'box_padding_5' => array('title' => t('Padding 25px'), 	'class' => array('block-padding-25px')),
		  ),
		);
		
		/** box shading            **/
		$skins['bento_box_shading'] = array(
		  'title' => t('Box Shading'),
		  'description' => 'Use Darken for Light Backgrounds and Lighten for Dark Backgrounds. If you would like to add color to the background as well, consider using a custom class in the general section. Note that this is a % transparency so the color from the background will come through. If you would like it to have an opacity, you will need to add color to the background in your own css file.',
		  'type' => 'select',
		  'default status' => 1,
		  'group' => 'custom',
		  'options' => array(
				'box_shading_d1' => array('title' => t('Darken 10%'), 	'class' => array('darken10')),
				'box_shading_d2' => array('title' => t('Darken 20%'), 	'class' => array('darken20')),
				'box_shading_d3' => array('title' => t('Darken 30%'), 	'class' => array('darken30')),
				'box_shading_d4' => array('title' => t('Darken 40%'), 	'class' => array('darken40')),
				'box_shading_d5' => array('title' => t('Darken 50%'), 	'class' => array('darken50')),
				'box_shading_d6' => array('title' => t('Darken 60%'), 	'class' => array('darken60')),
				'box_shading_d7' => array('title' => t('Darken 70%'), 	'class' => array('darken70')),
				'box_shading_d8' => array('title' => t('Darken 80%'), 	'class' => array('darken80')),
				'box_shading_d9' => array('title' => t('Darken 90%'),	'class' => array('darken90')),
				'box_shading_l1' => array('title' => t('Lighten 10%'), 'class' => array('lighten10')),
				'box_shading_l2' => array('title' => t('Lighten 20%'), 'class' => array('lighten20')),
				'box_shading_l3' => array('title' => t('Lighten 30%'), 'class' => array('lighten30')),
				'box_shading_l4' => array('title' => t('Lighten 40%'), 'class' => array('lighten40')),
				'box_shading_l5' => array('title' => t('Lighten 50%'), 'class' => array('lighten50')),
				'box_shading_l6' => array('title' => t('Lighten 60%'), 'class' => array('lighten60')),
				'box_shading_l7' => array('title' => t('Lighten 70%'), 'class' => array('lighten70')),
				'box_shading_l8' => array('title' => t('Lighten 80%'), 'class' => array('lighten80')),
				'box_shading_l9' => array('title' => t('Lighten 90%'),	'class' => array('lighten90')),		
		  ),
		);

  return $skins;
}