<?php

/**
 * @file
 * ir_extention_views.views.inc
 */

/*
 * Implements hook_views_plugins().
 */
function ir_extention_views_views_plugins() {
  return array(
    'style' => array(
      'ir_extention' => array(
        'title' => t('IR Extention'),
        'help' => t('Displays the view output with ir_plugin applied.'),
        'help topic' => '',
        'handler' => 'ir_extention_views_plugin_style_ir_extention',
        'theme' => 'ir_extention_views',
        'theme file' => 'ir_extention_views.theme.inc',
        'theme path' => drupal_get_path('module', 'ir_extention_views') . '/theme',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => FALSE,
      ),
    ),
    'pager' => array(
      'ir_extention_views_pager' => array(
        'title' => t('Paged output, parent'),
        'help' => t('Provides a pager for view output.'),
        'help topic' => '',
        'handler' => 'ir_extention_views_plugin_pager_ir_extention',
        'theme' => 'ir_extention_views_pager',
        'theme file' => 'ir_extention_views.theme.inc',
        'theme path' => drupal_get_path('module', 'ir_extention_views') . '/theme',
        'uses options' => TRUE,
        'parent' => 'full',
      ),
    ),
  );
}
