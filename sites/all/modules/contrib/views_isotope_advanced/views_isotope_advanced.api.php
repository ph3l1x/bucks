<?php

/*
 * Hook for adding custom jquery sources to use with views_isotope_advanced.
 * 
 * The value of 'js_object' is the name of the global jquery object to be used
 * with views_isotope_advanced js. Module makers are responsible for making the actual isotope
 * library to be included with with their custom included jquery library.
 */
function hook_views_isotope_advanced_jquery_source_info() {
  $sources = array();
  
  $sources['jquery20'] = array(
      'title' => t('Custom jQuery Source: 2.0'),
      'js_ojbect' => 'jq20',
  );
  
  return $sources;
}

/*
 * Hook to alter jquery sources
 */
function hook_views_isotope_advanced_jquery_source_info_alter(&$sources) {
  $sources['jquery20']['js_object'] = 'jQuery20';
}

/*
 * Hook for adding isotope instances programmatically
 */
function hook_views_isotope_advanced_info() {
  $instances = array();
  
  $instances['test_instance'] = array (
    'enabled' => 1,
    'container_selector' => '#block-views-tiles-block .view-content',
    'item_selector' => '.views-row',
    'breakpoints' => array (
      0 => array (
        'screen_width' => 0,
        'number_of_columns' => 5,
        'gutter_width' => 15,
        'fluid' => 0,
        'disable' => 0,
      ),
    ),
    'detect_rtl' => 1,
    'layout_mode' => 'masonry',
    'init_animation' => 1,
    'wait_for_images' => 1,
  );
  
  return $instances;
}

/*
 * Hook for altering isotope instances
 */
function hook_views_isotope_advanced_info_alter(&$instances) {
  $instances['test_instance']['enabled'] = 0;
}

