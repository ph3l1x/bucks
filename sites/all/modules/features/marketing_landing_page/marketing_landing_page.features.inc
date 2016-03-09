<?php
/**
 * @file
 * marketing_landing_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function marketing_landing_page_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('This landing page will allow you to create pages for ad campaigns and downloads. It should include a webform option for email capture.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
