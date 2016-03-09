<?php
/**
* Implements hook_skinr_skin_PLUGIN_info().
*/

function bento_skinr_group_blocks_info() {
  $groups['blocks'] = array(
    'title' => t('Blocks'),
    'description' => t('Preset Styles for Blocks'),
  );


  return $groups;


}


function bento_skinr_skin_blocks_info() {
	
	/** Canned Styles 			**/
		  $skins['bento_block_styles'] = array(
		    'title' => t('Block Styles Override'),
		    'type' => 'select',
		    'description' => ('Selecting these styles will override the default block setting from the theme settings. You can also apply these block styles to blocks outside of the sidebar regions. Note that if you have a sitewide default for block stylings set in your theme settings, these stylings will not completely override all the elements.'),
			'default status' => 1,
		    'group' => 'blocks',
		    'options' => array(
				'block_style_1' => array('title' => t('Block Style 1 - Flat'), 	'class' => array('block-style-1')),
				'block_style_2' => array('title' => t('Block Style 2 - Outline'), 	'class' => array('block-style-2')),
				'block_style_3' => array('title' => t('Block Style 3 - Gradient from top'), 	'class' => array('block-style-3')),
				'block_style_4' => array('title' => t('Block Style 4 - Gradient from bottom'), 	'class' => array('block-style-4')),
				'block_style_5' => array('title' => t('Block Style 5 - Chiseled'), 	'class' => array('block-style-5')),
 			),
		  );


	/** List Styles    **/	
	  $skins['bento_list_styles'] = array(
	    'title' => t('List Styles'),
		'description' => 'This should work for any ul li but mostly designed for recent blog post types of lists.',
	    'type' => 'select',
	    'default status' => 1,
	    'group' => 'blocks',
	    'options' => array(
	      'list_style_1' => array('title' =>  t('List Style 1 - Dark items'),  'class' => array('list-style-1')),
	      'list_style_2' => array('title' =>  t('List Style 2 - Dark items with left border'),  'class' => array('list-style-2')),
	      'list_style_3' => array('title' =>  t('List Style 3 - Light items with dashed bottom border'),  'class' => array('list-style-3')),
	      'list_style_4' => array('title' =>  t('List Style 4 - Light items with dashed bottom border and left dark border'),  'class' => array('list-style-4')),
	      'list_style_5' => array('title' =>  t('List Style 5 - Light bulleted items with bottom border'),  'class' => array('list-style-5')),
	      'list_style_6' => array('title' =>  t('List Style 6 - Light triangle bulleted items'),  'class' => array('list-style-6')),
	    ),
	  );


	$form['components']['bento']['bootstrap_bento_lists'] = array(
	  '#type' => 'select',
	  '#title' => t('Bento List Styles'),
	  '#description' => t('These options modify the default list style in blocks. Set your color options in your CSS file. You can override lists in blocks with Skinr. Only affect &#60;ul&#62; in blocks.'),
	  '#default_value' => theme_get_setting('bootstrap_bento_lists'),
	  '#options' => array(
	    'list-style-1' => t('List Style 1 - Dark items'),
	    'list-style-2' => t('List Style 2 - Dark items with left border'),
	    'list-style-3' => t('List Style 3 - Light items with dashed bottom border'),
	    'list-style-4' => t('List Style 4 - Light items with dashed bottom border and left dark border'),
	    'list-style-5' => t('List Style 5 - Light bulleted items with bottom border'),
	    'list-style-6' => t('List Style 6 - Light triangle bulleted items'),
	  ),
	  '#empty_option' => t('Default List Style'),
	);
	
	
	/** Heading H2 Styles  **/
	$skins['bento_heading_styles'] = array(
	  'title' => t('Heading Styles'),
		'description' => 'These style numbers should relate artistically to the list styles but you can mix and match.',
	  'type' => 'select',
	  'default status' => 1,
	  'group' => 'blocks',
	  'options' => array(


  ),
);


	/** Dark Region  **/
	$skins['bento_dark_region_block'] = array(
	  'title' => t('Dark Region'),
		'description' => 'Make all the text in this block have white text using the dark-region.',
	  'type' => 'select',
	  'default status' => 1,
	  'group' => 'blocks',
	  'options' => array(
	      'dark-region' => array('title' =>  t('Text as White'),  'class' => array('dark-region')),
	      'dark-region-dark-background' => array('title' =>  t('Text as White with Black Background'),  'class' => array('dark-region','dbg')),


  ),
);
  return $skins;
}