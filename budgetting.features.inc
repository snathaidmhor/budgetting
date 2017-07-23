<?php
/**
 * @file
 * budgetting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function budgetting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function budgetting_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function budgetting_node_info() {
  $items = array(
    'money_cache' => array(
      'name' => t('Cache'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'monthly_expense' => array(
      'name' => t('Monthly Expense'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Item'),
      'help' => '',
    ),
    'monthly_income' => array(
      'name' => t('Monthly Income'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Income Source'),
      'help' => '',
    ),
    'yearly_expense' => array(
      'name' => t('Yearly Expense'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Item'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
