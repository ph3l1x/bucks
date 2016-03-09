<?php
/**
 * @file
 * bento_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bento_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create video_post content.
  $permissions['create video_post content'] = array(
    'name' => 'create video_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any video_post content.
  $permissions['delete any video_post content'] = array(
    'name' => 'delete any video_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own video_post content.
  $permissions['delete own video_post content'] = array(
    'name' => 'delete own video_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any video_post content.
  $permissions['edit any video_post content'] = array(
    'name' => 'edit any video_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own video_post content.
  $permissions['edit own video_post content'] = array(
    'name' => 'edit own video_post content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
