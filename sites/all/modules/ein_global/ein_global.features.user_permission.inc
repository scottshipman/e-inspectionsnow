<?php
/**
 * @file
 * ein_global.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ein_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create inspection_report content'.
  $permissions['create inspection_report content'] = array(
    'name' => 'create inspection_report content',
    'roles' => array(
      'Inspector' => 'Inspector',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any inspection_report content'.
  $permissions['delete any inspection_report content'] = array(
    'name' => 'delete any inspection_report content',
    'roles' => array(
      'Inspector' => 'Inspector',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own inspection_report content'.
  $permissions['delete own inspection_report content'] = array(
    'name' => 'delete own inspection_report content',
    'roles' => array(
      'Inspector' => 'Inspector',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any inspection_report content'.
  $permissions['edit any inspection_report content'] = array(
    'name' => 'edit any inspection_report content',
    'roles' => array(
      'Inspector' => 'Inspector',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own inspection_report content'.
  $permissions['edit own inspection_report content'] = array(
    'name' => 'edit own inspection_report content',
    'roles' => array(
      'Inspector' => 'Inspector',
    ),
    'module' => 'node',
  );

  return $permissions;
}
