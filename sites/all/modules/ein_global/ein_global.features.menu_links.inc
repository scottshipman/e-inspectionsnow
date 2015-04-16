<?php
/**
 * @file
 * ein_global.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ein_global_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/1
  $menu_links['main-menu_about-us:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:node/2
  $menu_links['main-menu_contact-us:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home-buyers:node/5
  $menu_links['main-menu_home-buyers:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Home Buyers',
    'options' => array(
      'identifier' => 'main-menu_home-buyers:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_inspection-reports:manager/inspection-reports
  $menu_links['main-menu_inspection-reports:manager/inspection-reports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manager/inspection-reports',
    'router_path' => 'manager/inspection-reports',
    'link_title' => 'Inspection Reports',
    'options' => array(
      'identifier' => 'main-menu_inspection-reports:manager/inspection-reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_real-estate-professionals:node/4
  $menu_links['main-menu_real-estate-professionals:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Real Estate Professionals',
    'options' => array(
      'identifier' => 'main-menu_real-estate-professionals:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Contact Us');
  t('Home');
  t('Home Buyers');
  t('Inspection Reports');
  t('Real Estate Professionals');


  return $menu_links;
}
