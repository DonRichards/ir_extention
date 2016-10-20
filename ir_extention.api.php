<?php

/**
 * @file
 * API documentation for IR Extention.
 */

/**
 * Implements hook_ir_extention_settings_alter().
 *
 * @param array
 *   Instance settings.
 * @param string
 *   IR Plugin identifier.
 */
function hook_ir_extention_settings_alter(&$settings, $instance) {
  switch ($instance) {
    case 'ir_extention_settings_default':
      //
      break;
  }
}
