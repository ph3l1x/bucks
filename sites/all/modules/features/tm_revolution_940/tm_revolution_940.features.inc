<?php
/**
 * @file
 * tm_revolution_940.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tm_revolution_940_node_info() {
  $items = array(
    'tm_revolution_940' => array(
      'name' => t('TM - Revolution 940'),
      'base' => 'node_content',
      'description' => t('Revolution slideshow with custom transition effects and build animations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
