<?php
/**
 * @file
 * product_catalog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function product_catalog_user_default_roles() {
  $roles = array();

  // Exported role: Tech Support.
  $roles['Tech Support'] = array(
    'name' => 'Tech Support',
    'weight' => '2',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '3',
  );

  return $roles;
}
