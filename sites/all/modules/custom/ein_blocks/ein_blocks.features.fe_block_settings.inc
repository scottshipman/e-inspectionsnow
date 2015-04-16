<?php
/**
 * @file
 * ein_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ein_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-login_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'login_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-my_profile'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'my_profile',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-new_report'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'new_report',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Inspector' => 4,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-inspection_reports-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'inspection_reports-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'manager*
node/add*
node/*/edit
admin*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
