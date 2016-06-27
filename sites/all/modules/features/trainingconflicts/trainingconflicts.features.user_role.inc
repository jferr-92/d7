<?php
/**
 * @file
 * trainingconflicts.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function trainingconflicts_user_default_roles() {
  $roles = array();

  // Exported role: Trainingblogger.
  $roles['Traininguser'] = array(
    'name' => 'Traininguser',
    'weight' => 3,
  );

  return $roles;
}
