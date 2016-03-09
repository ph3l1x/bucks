<?php
/**
 * @file
 * bento_video_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bento_video_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_video_gallery_node_info() {
  $items = array(
    'video_post' => array(
      'name' => t('Video Post'),
      'base' => 'node_content',
      'description' => t('This content type will allow you to embed a video from your chosen provider. We recommend you embed YouTube videos. However, feel free to test other embedding options.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<p>This content type will allow you to embed a video from your chosen provider. We recommend you embed YouTube videos. However, feel free to test other embedding options.</p>
'),
    ),
  );
  return $items;
}
