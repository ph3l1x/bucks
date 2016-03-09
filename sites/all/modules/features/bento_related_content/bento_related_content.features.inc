<?php
/**
 * @file
 * bento_related_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bento_related_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_related_content_node_info() {
  $items = array(
    'call_to_action' => array(
      'name' => t('Call to Action'),
      'base' => 'node_content',
      'description' => t('Content will be displayed in a block on all pages related to the content using tags.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
