<?php
/**
 * @file
 * bento_photo_gallery.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bento_photo_gallery_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_photo_gallery_node_info() {
  $items = array(
    'gallery_photo' => array(
      'name' => t('Gallery Photo'),
      'base' => 'node_content',
      'description' => t('Upload images here to add to the photo gallery at: www.yoursite.com/gallery'),
      'has_title' => '1',
      'title_label' => t('Image Title'),
      'help' => '',
    ),
  );
  return $items;
}
