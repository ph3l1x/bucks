<?php
/**
 * @file
 * bento_careers_.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bento_careers__user_default_permissions() {
  $permissions = array();

  // Exported permission: create career content.
  $permissions['create career content'] = array(
    'name' => 'create career content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any career content.
  $permissions['delete any career content'] = array(
    'name' => 'delete any career content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own career content.
  $permissions['delete own career content'] = array(
    'name' => 'delete own career content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any career content.
  $permissions['edit any career content'] = array(
    'name' => 'edit any career content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own career content.
  $permissions['edit own career content'] = array(
    'name' => 'edit own career content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
