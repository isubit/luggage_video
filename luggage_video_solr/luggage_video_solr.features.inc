<?php
/**
 * @file
 * luggage_video_solr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_video_solr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
