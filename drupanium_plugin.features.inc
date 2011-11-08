<?php
/**
 * @file
 * drupanium.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupanium_plugin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function drupanium_plugin_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
