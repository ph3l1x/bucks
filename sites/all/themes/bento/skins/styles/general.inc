<?php
/**
* Implements hook_skinr_skin_PLUGIN_info().
*/



function bento_skinr_skin_general_info() {


/** Custom Styles		**/
	$skins['bento_custom_styles'] = array(
	  'title' => t('Custom Styling'),
	  'description' => ('Add these classes to your local style sheets to use. Make sure that any text elements are in .customX .content and any padding, borders, etc are in .customX .block-inner'),
	  'default status' => 1,
	  'group' => 'general',
	  'options' => array(
			'custom_style_1' => array('title' => t('custom1'), 	'class' => array('custom1')),
			'custom_style_2' => array('title' => t('custom2'), 	'class' => array('custom2')),
			'custom_style_3' => array('title' => t('custom3'), 	'class' => array('custom3')),
			'custom_style_4' => array('title' => t('custom4'), 	'class' => array('custom4')),

	  ),
  );
	$skins['bento_custom_mobile'] = array(
	  'title' => t('Mobile / Desktop Visibility'),
	  'description' => ('Blocks, by default, are visible on all devices. If you would like it visible only on phones or only on tablet/desktop, change the setting here. <none> indicates default setting.'),
	  'default status' => 1,
      'type' => 'select',
	  'group' => 'general',
	  'options' => array(
			'phone' => array('title' => t('Show only on phones'), 	'class' => array('phone')),
			'desktop' => array('title' => t('Show only on tablets/desktops'), 	'class' => array('desktop')),


	  ),
  );











  return $skins;
}