<?php
/**
 * @file
 * our_seasons_block.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function our_seasons_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create our_seasons_block content'.
  $permissions['create our_seasons_block content'] = array(
    'name' => 'create our_seasons_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any our_seasons_block content'.
  $permissions['delete any our_seasons_block content'] = array(
    'name' => 'delete any our_seasons_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own our_seasons_block content'.
  $permissions['delete own our_seasons_block content'] = array(
    'name' => 'delete own our_seasons_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any our_seasons_block content'.
  $permissions['edit any our_seasons_block content'] = array(
    'name' => 'edit any our_seasons_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own our_seasons_block content'.
  $permissions['edit own our_seasons_block content'] = array(
    'name' => 'edit own our_seasons_block content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
