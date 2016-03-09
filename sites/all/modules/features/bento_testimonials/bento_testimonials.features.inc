<?php
/**
 * @file
 * bento_testimonials.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bento_testimonials_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_testimonials_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('A testimonial content type for the Tribute Testimonial Module'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('<p>Fill out the Name field with the name of the person or organization. Fill out the body field with the testimony.</p>
<p>Note that all fields except for the name are required. The snippet is what will be shown in the sidebar block and the main testimonial page. If you enter a body field, that will only be shown on the individual testimonial page.</p>'),
    ),
  );
  return $items;
}
