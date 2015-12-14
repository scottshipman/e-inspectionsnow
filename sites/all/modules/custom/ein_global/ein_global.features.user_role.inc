<?php
/**
 * @file
 * ein_global.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ein_global_user_default_roles() {
  $roles = array();

  // Exported role: Inspector.
  $roles['Inspector'] = array(
    'name' => 'Inspector',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 4,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 5,
  );

  return $roles;
}
