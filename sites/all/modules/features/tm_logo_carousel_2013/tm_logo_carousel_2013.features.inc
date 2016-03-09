<?php
/**
 * @file
 * tm_logo_carousel_2013.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tm_logo_carousel_2013_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tm_logo_carousel_2013_node_info() {
  $items = array(
    'tech_partner_logo' => array(
      'name' => t('Tech Partner Logo'),
      'base' => 'node_content',
      'description' => t('This is the content type used to upload new logos to the scrolling list just above the footer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
