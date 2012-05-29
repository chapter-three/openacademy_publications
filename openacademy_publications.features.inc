<?php
/**
 * @file
 * openacademy_publications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openacademy_publications_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function openacademy_publications_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openacademy_publications_node_info() {
  $items = array(
    'openacademy_publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('An important publication to post to your site.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
