<?php
/**
 * @file
 * downloadable_jump_menu.features.inc
 */

/**
 * Implements hook_views_api().
 */
function downloadable_jump_menu_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function downloadable_jump_menu_node_info() {
  $items = array(
    'downloadable_forms' => array(
      'name' => t('Downloadable Forms'),
      'base' => 'node_content',
      'description' => t('When you use this content type your form will be available to download.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
