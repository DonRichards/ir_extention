/**
 * @file
 * Initiate IR Plugin.
 */

(function($) {

  Drupal.behaviors.ir_extention = {
    attach: function(context, settings) {

      for (var parent in settings.ir_extention) {
        // Parent instance.
        var par = $('#' + parent);

        // Attach instance settings.
        par.(settings.ir_extention[parent].settings);

      }
    }
  };

}(jQuery));
