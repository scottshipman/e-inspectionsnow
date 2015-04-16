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

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 4,
  );

  return $roles;
}
