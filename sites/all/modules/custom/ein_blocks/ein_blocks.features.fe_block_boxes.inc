<?php
/**
 * @file
 * ein_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ein_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Login Button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'login_block';
  $fe_block_boxes->body = '<p><a class="button" href="/user/login">Login</a></p>
';

  $export['login_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'My Profile Button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'my_profile';
  $fe_block_boxes->body = '<p><a class="button" href="/user/logout">Logout</a>  <a class="button" href="/user">My Profile</a></p>
';

  $export['my_profile'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Add Report Button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'new_report';
  $fe_block_boxes->body = '<p><a class="button" href="/node/add/inspection-report">New Report</a></p>
';

  $export['new_report'] = $fe_block_boxes;

  return $export;
}
