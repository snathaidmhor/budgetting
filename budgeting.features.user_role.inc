<?php
/**
 * @file
 * budgeting.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function budgeting_user_default_roles() {
  $roles = array();

  // Exported role: budgeter.
  $roles['budgeter'] = array(
    'name' => 'budgeter',
    'weight' => 3,
  );

  return $roles;
}
