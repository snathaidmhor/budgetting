<?php
/**
 * @file
 * budgetting.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function budgetting_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create money_cache content'.
  $permissions['create money_cache content'] = array(
    'name' => 'create money_cache content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create monthly_expense content'.
  $permissions['create monthly_expense content'] = array(
    'name' => 'create monthly_expense content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create monthly_income content'.
  $permissions['create monthly_income content'] = array(
    'name' => 'create monthly_income content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create yearly_expense content'.
  $permissions['create yearly_expense content'] = array(
    'name' => 'create yearly_expense content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any money_cache content'.
  $permissions['delete any money_cache content'] = array(
    'name' => 'delete any money_cache content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any monthly_expense content'.
  $permissions['delete any monthly_expense content'] = array(
    'name' => 'delete any monthly_expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any monthly_income content'.
  $permissions['delete any monthly_income content'] = array(
    'name' => 'delete any monthly_income content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any yearly_expense content'.
  $permissions['delete any yearly_expense content'] = array(
    'name' => 'delete any yearly_expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own money_cache content'.
  $permissions['delete own money_cache content'] = array(
    'name' => 'delete own money_cache content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own monthly_expense content'.
  $permissions['delete own monthly_expense content'] = array(
    'name' => 'delete own monthly_expense content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own monthly_income content'.
  $permissions['delete own monthly_income content'] = array(
    'name' => 'delete own monthly_income content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own yearly_expense content'.
  $permissions['delete own yearly_expense content'] = array(
    'name' => 'delete own yearly_expense content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any money_cache content'.
  $permissions['edit any money_cache content'] = array(
    'name' => 'edit any money_cache content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any monthly_expense content'.
  $permissions['edit any monthly_expense content'] = array(
    'name' => 'edit any monthly_expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any monthly_income content'.
  $permissions['edit any monthly_income content'] = array(
    'name' => 'edit any monthly_income content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any yearly_expense content'.
  $permissions['edit any yearly_expense content'] = array(
    'name' => 'edit any yearly_expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own money_cache content'.
  $permissions['edit own money_cache content'] = array(
    'name' => 'edit own money_cache content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own monthly_expense content'.
  $permissions['edit own monthly_expense content'] = array(
    'name' => 'edit own monthly_expense content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own monthly_income content'.
  $permissions['edit own monthly_income content'] = array(
    'name' => 'edit own monthly_income content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own yearly_expense content'.
  $permissions['edit own yearly_expense content'] = array(
    'name' => 'edit own yearly_expense content',
    'roles' => array(
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'budgeter' => 'budgeter',
    ),
    'module' => 'search',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'budgeter' => 'budgeter',
    ),
    'module' => 'node',
  );

  return $permissions;
}
