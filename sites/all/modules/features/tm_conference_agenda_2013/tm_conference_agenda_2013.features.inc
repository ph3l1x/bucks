<?php
/**
 * @file
 * tm_conference_agenda_2013.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tm_conference_agenda_2013_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tm_conference_agenda_2013_node_info() {
  $items = array(
    'speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => t('Add a new speaker.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'workshop' => array(
      'name' => t('Workshop'),
      'base' => 'node_content',
      'description' => t('Create a Workshop to add an event to your agenda.  '),
      'has_title' => '1',
      'title_label' => t('Title of Session / Topic'),
      'help' => '',
    ),
  );
  return $items;
}
