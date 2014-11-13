<?php
/**
 * @file
 * test.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function test_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Home page.';
  $page->path = 'home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f353e793-755c-4b11-8893-bb2f7f6e2fe6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c92eee4-7dec-439a-94f6-2bfa8517a1ca';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'user-new';
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
    $pane->locks = array();
    $pane->uuid = '2c92eee4-7dec-439a-94f6-2bfa8517a1ca';
    $display->content['new-2c92eee4-7dec-439a-94f6-2bfa8517a1ca'] = $pane;
    $display->panels['left'][0] = 'new-2c92eee4-7dec-439a-94f6-2bfa8517a1ca';
    $pane = new stdClass();
    $pane->pid = 'new-3bfe5ffc-19f7-4bc8-9556-ffe89825210c';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'recent_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3bfe5ffc-19f7-4bc8-9556-ffe89825210c';
    $display->content['new-3bfe5ffc-19f7-4bc8-9556-ffe89825210c'] = $pane;
    $display->panels['left'][1] = 'new-3bfe5ffc-19f7-4bc8-9556-ffe89825210c';
    $pane = new stdClass();
    $pane->pid = 'new-8a9c0356-e622-42a3-b895-aa84e9ff52d0';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'comment-recent';
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
    $pane->locks = array();
    $pane->uuid = '8a9c0356-e622-42a3-b895-aa84e9ff52d0';
    $display->content['new-8a9c0356-e622-42a3-b895-aa84e9ff52d0'] = $pane;
    $display->panels['right'][0] = 'new-8a9c0356-e622-42a3-b895-aa84e9ff52d0';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
