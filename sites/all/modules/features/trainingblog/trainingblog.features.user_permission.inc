<?php
/**
 * @file
 * trainingblog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function trainingblog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer trainingblog status'.
  $permissions['administer trainingblog status'] = array(
    'name' => 'administer trainingblog status',
    'roles' => array(
      'Trainingblogger' => 'Trainingblogger',
    ),
    'module' => 'trainingblog',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Trainingblogger' => 'Trainingblogger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'Trainingblogger' => 'Trainingblogger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'Trainingblogger' => 'Trainingblogger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Trainingblogger' => 'Trainingblogger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
