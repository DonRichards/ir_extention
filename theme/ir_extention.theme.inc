<?php

/**
 * @file
 * ir_extention.theme.inc
 *
 * Implements theme functions for IR Extention.
 */

/**
 * Default theme implementation for lists
 */
function theme_ir_extention_list(&$vars) {
  $items = &$vars['items'];
  $output = '';

  if (!empty($items)) {
    foreach ($items as $i => $item) {
      $output .= theme('ir_extention_list_item', array(
        'item' => $item['row'],
        'class' => drupal_html_class('item-' . $i),
      ));
    }
  }

  return $output;
}

/**
 * Default theme implementation for parent's items
 */
function theme_ir_extention_list_item(&$vars) {
  return '<div class="' . $vars['class'] . '">' . $vars['item'] . "</div>";
}

/**
 * Template process parent theme.
 */
function template_process_ir_extention(&$vars) {
  $instance_id = $vars['settings']['instance'];
  $ir_extention_id = $vars['settings']['attributes']['id']['default'];
  $vars['settings']['attributes']['id'] = $ir_extention_id;

  ir_extention_initiate_instance($instance_id, $ir_extention_id);
}
