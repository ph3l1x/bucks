<?php

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'skinr_panels_test';
$page->task = 'page';
$page->admin_title = 'Skinr Panels Test';
$page->admin_description = 'Skinr Panels Test panels page.';
$page->path = 'skinr-panels-test-panel';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_skinr_panels_test_panel_context';
$handler->task = 'page';
$handler->subtask = 'skinr_panels_test';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Panels test page';
$display->uuid = 'f07983c9-bab9-4cac-9a6e-b1001c5566fe';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-295dc791-d2a3-4f67-82e4-77c0b5ad671f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'system-user-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = '295dc791-d2a3-4f67-82e4-77c0b5ad671f';
  $display->content['new-295dc791-d2a3-4f67-82e4-77c0b5ad671f'] = $pane;
  $display->panels['middle'][0] = 'new-295dc791-d2a3-4f67-82e4-77c0b5ad671f';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-295dc791-d2a3-4f67-82e4-77c0b5ad671f';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
