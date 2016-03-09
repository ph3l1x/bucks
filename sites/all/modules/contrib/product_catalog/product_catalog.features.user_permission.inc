<?php
/**
 * @file
 * product_catalog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function product_catalog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create catalog_product content.
  $permissions['create catalog_product content'] = array(
    'name' => 'create catalog_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any catalog_product content.
  $permissions['delete any catalog_product content'] = array(
    'name' => 'delete any catalog_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own catalog_product content.
  $permissions['delete own catalog_product content'] = array(
    'name' => 'delete own catalog_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any catalog_product content.
  $permissions['edit any catalog_product content'] = array(
    'name' => 'edit any catalog_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own catalog_product content.
  $permissions['edit own catalog_product content'] = array(
    'name' => 'edit own catalog_product content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: import catalog_feed feeds.
  $permissions['import catalog_feed feeds'] = array(
    'name' => 'import catalog_feed feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: publish any catalog_product content.
  $permissions['publish any catalog_product content'] = array(
    'name' => 'publish any catalog_product content',
    'roles' => array(
      0 => 'Tech Support',
      1 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable catalog_product content.
  $permissions['publish editable catalog_product content'] = array(
    'name' => 'publish editable catalog_product content',
    'roles' => array(
      0 => 'Tech Support',
      1 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own catalog_product content.
  $permissions['publish own catalog_product content'] = array(
    'name' => 'publish own catalog_product content',
    'roles' => array(
      0 => 'Tech Support',
      1 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any catalog_product content.
  $permissions['unpublish any catalog_product content'] = array(
    'name' => 'unpublish any catalog_product content',
    'roles' => array(
      0 => 'Tech Support',
      1 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable catalog_product content.
  $permissions['unpublish editable catalog_product content'] = array(
    'name' => 'unpublish editable catalog_product content',
    'roles' => array(
      0 => 'Tech Support',
      1 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own catalog_product content.
  $permissions['unpublish own catalog_product content'] = array(
    'name' => 'unpublish own catalog_product content',
    'roles' => array(
      0 => 'Tech Support',
      1 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}
