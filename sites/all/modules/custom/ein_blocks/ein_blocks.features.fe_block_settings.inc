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

  // bartik
  $theme = array();

  $theme['views-inspection_reports-block'] = array(
    'module' => 'views',
    'delta' => 'inspection_reports-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'manager*
node/add*
node/*/edit
admin*',
    'title' => '',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // corporateclean
  $theme = array();

  $theme['views-inspection_reports-block'] = array(
    'module' => 'views',
    'delta' => 'inspection_reports-block',
    'theme' => 'corporateclean',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'manager*
node/add*
node/*/edit
admin*',
    'title' => '',
    'cache' => -1,
  );

  $export['corporateclean'] = $theme;

  // seven
  $theme = array();

  $theme['views-inspection_reports-block'] = array(
    'module' => 'views',
    'delta' => 'inspection_reports-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'manager*
node/add*
node/*/edit
admin*',
    'title' => '',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  // skeletontheme
  $theme = array();

  $theme['views-inspection_reports-block'] = array(
    'module' => 'views',
    'delta' => 'inspection_reports-block',
    'theme' => 'skeletontheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'manager*
node/add*
node/*/edit
admin*',
    'title' => '',
    'cache' => -1,
  );

  $export['skeletontheme'] = $theme;

  // thecompany
  $theme = array();

  $theme['views-inspection_reports-block'] = array(
    'module' => 'views',
    'delta' => 'inspection_reports-block',
    'theme' => 'thecompany',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'manager*
node/add*
node/*/edit
admin*',
    'title' => '',
    'cache' => -1,
  );

  $export['thecompany'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
