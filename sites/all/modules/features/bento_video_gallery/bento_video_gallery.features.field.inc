<?php
/**
 * @file
 * bento_video_gallery.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function bento_video_gallery_field_default_fields() {
  $fields = array();

  // Exported field: 'node-video_post-field_video_embed_code'.
  $fields['node-video_post-field_video_embed_code'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video_embed_code',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'video_embed_field',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'video_embed_field',
    ),
    'field_instance' => array(
      'bundle' => 'video_post',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Simply copy and paste the URL from YouTube or Vimeo here and it will format automatically for you.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'video_embed_field',
          'settings' => array(
            'description' => 1,
            'description_position' => 'bottom',
            'video_style' => 'normal',
          ),
          'type' => 'video_embed_field',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video_embed_code',
      'label' => 'Video Embed Code',
      'required' => 1,
      'settings' => array(
        'description_field' => 0,
        'description_length' => 128,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'video_embed_field',
        'settings' => array(),
        'type' => 'video_embed_field_video',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Simply copy and paste the URL from YouTube or Vimeo here and it will format automatically for you.');
  t('Video Embed Code');

  return $fields;
}
