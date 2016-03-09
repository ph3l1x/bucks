<?php
/**
 * @file
 * bento_product_catalog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bento_product_catalog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create catalog_item content.
  $permissions['create catalog_item content'] = array(
    'name' => 'create catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any catalog_item content.
  $permissions['delete any catalog_item content'] = array(
    'name' => 'delete any catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own catalog_item content.
  $permissions['delete own catalog_item content'] = array(
    'name' => 'delete own catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any catalog_item content.
  $permissions['edit any catalog_item content'] = array(
    'name' => 'edit any catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own catalog_item content.
  $permissions['edit own catalog_item content'] = array(
    'name' => 'edit own catalog_item content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
