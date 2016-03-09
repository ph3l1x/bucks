<?php
/**
 * @file
 * bento_events.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bento_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event content type for Tribute Events'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  return $items;
}
