<?php
/**
 * @file
 * ein_global.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ein_global_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ein_global_node_info() {
  $items = array(
    'inspection_report' => array(
      'name' => t('Inspection Report'),
      'base' => 'node_content',
      'description' => t('Data and uploaded file for an Inspection Report'),
      'has_title' => '1',
      'title_label' => t('Title of the Report as shown to Clients (not the actual filename)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
