<?php
/**
 * @file
 * bento_photo_gallery.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function bento_photo_gallery_field_default_fields() {
  $fields = array();

  // Exported field: 'node-gallery_photo-field_gallery_photo'.
  $fields['node-gallery_photo-field_gallery_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gallery_photo',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_photo',
      'deleted' => '0',
      'description' => 'Upload the Photo to be added to the gallery.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => 'photo-gallery-image',
            'colorbox_multivalue_index' => NULL,
            'colorbox_node_style' => 'square_thumbnail',
          ),
          'type' => 'colorbox',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gallery_photo',
      'label' => 'Gallery Photo',
      'required' => 1,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'gallery',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '6MB',
        'max_resolution' => '940x720',
        'min_resolution' => '200x200',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'photo-gallery-generic',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery Photo');
  t('Upload the Photo to be added to the gallery.');

  return $fields;
}
