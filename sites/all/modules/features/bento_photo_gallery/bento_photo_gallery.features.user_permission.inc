<?php
/**
 * @file
 * bento_photo_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bento_photo_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery_photo content.
  $permissions['create gallery_photo content'] = array(
    'name' => 'create gallery_photo content',
    'roles' => array(
      0 => 'Tech Support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any gallery_photo content.
  $permissions['delete any gallery_photo content'] = array(
    'name' => 'delete any gallery_photo content',
    'roles' => array(
      0 => 'Tech Support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own gallery_photo content.
  $permissions['delete own gallery_photo content'] = array(
    'name' => 'delete own gallery_photo content',
    'roles' => array(
      0 => 'Tech Support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gallery_photo content.
  $permissions['edit any gallery_photo content'] = array(
    'name' => 'edit any gallery_photo content',
    'roles' => array(
      0 => 'Tech Support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own gallery_photo content.
  $permissions['edit own gallery_photo content'] = array(
    'name' => 'edit own gallery_photo content',
    'roles' => array(
      0 => 'Tech Support',
    ),
    'module' => 'node',
  );

  return $permissions;
}
