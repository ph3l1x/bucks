<?php
/**
 * @file
 * product_catalog.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function product_catalog_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'catalog_feed-xpathparser_12-explode';
  $feeds_tamper->importer = 'catalog_feed';
  $feeds_tamper->source = 'xpathparser:12';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '~',
    'limit' => '',
    'real_separator' => '~',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['catalog_feed-xpathparser_12-explode'] = $feeds_tamper;

  return $export;
}
