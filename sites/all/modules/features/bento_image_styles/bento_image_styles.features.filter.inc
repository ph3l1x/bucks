<?php
/**
 * @file
 * bento_image_styles.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function bento_image_styles_filter_default_formats() {
  $formats = array();

  // Exported format: HTML Only No Filter.
  $formats['html_only_nofilter'] = array(
    'format' => 'html_only_nofilter',
    'name' => 'HTML Only No Filter',
    'cache' => '1',
    'status' => '1',
    'weight' => '-7',
    'filters' => array(),
  );

  return $formats;
}
