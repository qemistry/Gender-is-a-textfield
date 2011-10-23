<?php
/**
 * @file
 * front_page_components.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_components_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
