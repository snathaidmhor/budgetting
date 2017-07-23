<?php
/**
 * @file
 * budgetting.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function budgetting_default_rules_configuration() {
  $items = array();
  $items['rules_to_homepage_after_add'] = entity_import('rules_config', '{ "rules_to_homepage_after_add" : {
      "LABEL" : "To Homepage after add",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "budgets" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [ { "redirect" : { "url" : "\\u003Cfront\\u003E" } } ]
    }
  }');
  return $items;
}
