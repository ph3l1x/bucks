<?php
/**
 * @file
 * bento_profile_directory.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bento_profile_directory_user_default_roles() {
  $roles = array();

  // Exported role: Employee.
  $roles['Employee'] = array(
    'name' => 'Employee',
    'weight' => '5',
  );

  // Exported role: Member.
  $roles['Member'] = array(
    'name' => 'Member',
    'weight' => '6',
  );

  return $roles;
}
