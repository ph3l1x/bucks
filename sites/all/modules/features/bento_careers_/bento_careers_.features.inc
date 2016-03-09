<?php
/**
 * @file
 * bento_careers_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bento_careers__views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_careers__node_info() {
  $items = array(
    'career' => array(
      'name' => t('Career'),
      'base' => 'node_content',
      'description' => t('If you post a job posting here, it will be listed, in alphabetical order, on the careers page. If you would like to un-list the job posting, you\'ll need to either delete or un-publish this content.'),
      'has_title' => '1',
      'title_label' => t('Posting Title'),
      'help' => t('If you post a job posting here, it will be listed, in alphabetical order, on the careers page. If you would like to un-list the job posting, you\'ll need to either delete or un-publish this content.'),
    ),
  );
  return $items;
}
