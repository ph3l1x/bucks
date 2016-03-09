<?php
/**
* Implements hook_skinr_skin_PLUGIN_info().
*/

function bento_skinr_group_buttons_info() {
  $groups['buttons'] = array(
    'title' => t('Buttons'),
    'description' => t('Use the links in your block as buttons or override the styles of the buttons in just this block.'),
  );


  return $groups;


}



function bento_skinr_skin_buttons_info() {



/** Links as Buttons   **/
$skins['bento_button_link'] = array(
  'title' => t('Makes all Links Buttons'),
	'description' => 'This will allow your links in your block to appear as buttons. By default it will take on the default button style of your site.',
  'type' => 'checkboxes',
  'default status' => 1,
  'group' => 'buttons',
  'options' => array(
      'button_link_yes' => array('title' =>  t('Yes'),  'class' => array('link-as-button')),

  ),
);



/** Button Styles   **/
$skins['bento_button_styles'] = array(
  'title' => t('Override Default Button Link Style'),
	'description' => 'This will override the default button style. Will only work if you have selected yes to make all links buttons.',
  'type' => 'select',
  'default status' => 1,
  'group' => 'buttons',
  'options' => array(
      'button_style_1' => array('title' =>  t('Button Style 1 - Flat/Square'),       'class' => array('button-style-1')),
      'button_style_2' => array('title' =>  t('Button Style 2 - Flat/Rounded'),      'class' => array('button-style-2')),
      'button_style_3' => array('title' =>  t('Button Style 3 - Flat/Pill'),         'class' => array('button-style-3')),
      'button_style_4' => array('title' =>  t('Button Style 4 - Outline/Square'),    'class' => array('button-style-4')),
      'button_style_5' => array('title' =>  t('Button Style 5 - Outline/Rounded'),   'class' => array('button-style-5')),
      'button_style_6' => array('title' =>  t('Button Style 6 - Outline/Pill'),      'class' => array('button-style-6')),
      'button_style_7' => array('title' =>  t('Button Style 7 - Gradient/Square'),   'class' => array('button-style-7')),
      'button_style_8' => array('title' =>  t('Button Style 8 - Gradient/Rounded'),  'class' => array('button-style-8')),
      'button_style_9' => array('title' =>  t('Button Style 9 - Gradient/Pill'),     'class' => array('button-style-9')),
      'button_style_10' => array('title' =>  t('Button Style 10- Buttoned/Square'),  'class' => array('button-style-10')),
      'button_style_11' => array('title' =>  t('Button Style 11- Buttoned/Rounded'), 'class' => array('button-style-11')),
      'button_style_12' => array('title' =>  t('Button Style 12- Buttoned/Pill'),    'class' => array('button-style-12')),
  ),
);

  return $skins;
}