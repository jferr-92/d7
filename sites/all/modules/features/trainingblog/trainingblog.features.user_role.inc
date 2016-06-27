<?php
/**
 * @file
 * trainingblog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function trainingblog_user_default_roles() {
  $roles = array();

  // Exported role: Trainingblogger.
  $roles['Trainingblogger'] = array(
    'name' => 'Trainingblogger',
    'weight' => 3,
  );

  return $roles;
}
