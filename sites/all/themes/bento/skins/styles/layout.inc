<?php
/**
* Implements hook_skinr_skin_PLUGIN_info().
*/

function bento_skinr_group_layout_info() {
  $groups['layout'] = array(
    'title' => t('Layout'),
    'description' => t('Set the layout for the blocks in a particular region.'),
  );


  return $groups;


}



function bento_skinr_skin_layout_info() {
	
/** Extra Small Devices    **/	
  $skins['bento_col_xs'] = array(
    'title' => t('Extra Small Devices - Phones <768px'),
	'description' => 'Generally you would not select these for sidebars but for full-width regions like preface or even content-top or content-bottom. This should be your default (remember, think mobile first!).',
    'type' => 'select',
    'default status' => 1,
    'group' => 'layout',
    'options' => array(
      'col_xs_1' => array('title' =>  t('1 Column'),   'class' => array('col-xs-1')),
      'col_xs_2' => array('title' =>  t('2 Columns'),  'class' => array('col-xs-2')),
      'col_xs_3' => array('title' =>  t('3 Columns'),  'class' => array('col-xs-3')),
      'col_xs_4' => array('title' =>  t('4 Columns'),  'class' => array('col-xs-4')),
      'col_xs_5' => array('title' =>  t('5 Columns'),  'class' => array('col-xs-5')),
      'col_xs_6' => array('title' =>  t('6 Columns'),  'class' => array('col-xs-6')),
      'col_xs_7' => array('title' =>  t('7 Columns'),  'class' => array('col-xs-7')),
      'col_xs_8' => array('title' =>  t('8 Columns'),  'class' => array('col-xs-8')),
      'col_xs_9' => array('title' =>  t('9 Columns'),  'class' => array('col-xs-9')),
      'col_xs_10' => array('title' => t('10 Columns'), 'class' => array('col-xs-10')),
      'col_xs_11' => array('title' => t('11 Columns'), 'class' => array('col-xs-11')),
      'col_xs_12' => array('title' => t('12 Columns'), 'class' => array('col-xs-12')),
    ),
  );

/** Extra Small Devices    **/	
  $skins['bento_col_sm'] = array(
    'title' => t('Small Devices - >768px'),
	'description' => 'Generally you would not select these for sidebars but for full-width regions like preface or even content-top or content-bottom.',
    'type' => 'select',
    'default status' => 1,
    'group' => 'layout',
    'options' => array(
      'col_sm_1' => array('title' =>  t('1 Column'),   'class' => array('col-sm-1')),
      'col_sm_2' => array('title' =>  t('2 Columns'),  'class' => array('col-sm-2')),
      'col_sm_3' => array('title' =>  t('3 Columns'),  'class' => array('col-sm-3')),
      'col_sm_4' => array('title' =>  t('4 Columns'),  'class' => array('col-sm-4')),
      'col_sm_5' => array('title' =>  t('5 Columns'),  'class' => array('col-sm-5')),
      'col_sm_6' => array('title' =>  t('6 Columns'),  'class' => array('col-sm-6')),
      'col_sm_7' => array('title' =>  t('7 Columns'),  'class' => array('col-sm-7')),
      'col_sm_8' => array('title' =>  t('8 Columns'),  'class' => array('col-sm-8')),
      'col_sm_9' => array('title' =>  t('9 Columns'),  'class' => array('col-sm-9')),
      'col_sm_10' => array('title' => t('10 Columns'), 'class' => array('col-sm-10')),
      'col_sm_11' => array('title' => t('11 Columns'), 'class' => array('col-sm-11')),
      'col_sm_12' => array('title' => t('12 Columns'), 'class' => array('col-sm-12')),
    ),
  );


/** Small Devices    **/	
  $skins['bento_col_md'] = array(
    'title' => t('Medium Devices - Desktops >992px'),
	'description' => 'Generally you would not select these for sidebars but for full-width regions like preface or even content-top or content-bottom.',
    'type' => 'select',
    'default status' => 1,
    'group' => 'layout',
    'options' => array(
      'col_md_1' => array('title' =>  t('1 Column'),   'class' => array('col-md-1')),
      'col_md_2' => array('title' =>  t('2 Columns'),  'class' => array('col-md-2')),
      'col_md_3' => array('title' =>  t('3 Columns'),  'class' => array('col-md-3')),
      'col_md_4' => array('title' =>  t('4 Columns'),  'class' => array('col-md-4')),
      'col_md_5' => array('title' =>  t('5 Columns'),  'class' => array('col-md-5')),
      'col_md_6' => array('title' =>  t('6 Columns'),  'class' => array('col-md-6')),
      'col_md_7' => array('title' =>  t('7 Columns'),  'class' => array('col-md-7')),
      'col_md_8' => array('title' =>  t('8 Columns'),  'class' => array('col-md-8')),
      'col_md_9' => array('title' =>  t('9 Columns'),  'class' => array('col-md-9')),
      'col_md_10' => array('title' => t('10 Columns'), 'class' => array('col-md-10')),
      'col_md_11' => array('title' => t('11 Columns'), 'class' => array('col-md-11')),
      'col_md_12' => array('title' => t('12 Columns'), 'class' => array('col-md-12')),
    ),
  );


/** Extra Small Devices    **/	
  $skins['bento_col_lg'] = array(
    'title' => t('Large Devices - Phones >1200px'),
	'description' => 'Generally you would not select these for sidebars but for full-width regions like preface or even content-top or content-bottom.',
    'type' => 'select',
    'default status' => 1,
    'group' => 'layout',
    'options' => array(
      'col_lg_1' => array('title' =>  t('1 Column'),   'class' => array('col-lg-1')),
      'col_lg_2' => array('title' =>  t('2 Columns'),  'class' => array('col-lg-2')),
      'col_lg_3' => array('title' =>  t('3 Columns'),  'class' => array('col-lg-3')),
      'col_lg_4' => array('title' =>  t('4 Columns'),  'class' => array('col-lg-4')),
      'col_lg_5' => array('title' =>  t('5 Columns'),  'class' => array('col-lg-5')),
      'col_lg_6' => array('title' =>  t('6 Columns'),  'class' => array('col-lg-6')),
      'col_lg_7' => array('title' =>  t('7 Columns'),  'class' => array('col-lg-7')),
      'col_lg_8' => array('title' =>  t('8 Columns'),  'class' => array('col-lg-8')),
      'col_lg_9' => array('title' =>  t('9 Columns'),  'class' => array('col-lg-9')),
      'col_lg_10' => array('title' => t('10 Columns'), 'class' => array('col-lg-10')),
      'col_lg_11' => array('title' => t('11 Columns'), 'class' => array('col-lg-11')),
      'col_lg_12' => array('title' => t('12 Columns'), 'class' => array('col-lg-12')),
    ),
  );




  return $skins;
}