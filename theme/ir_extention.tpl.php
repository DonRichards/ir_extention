<?php
/**
 * @file
 * Default parent output.
*/
?>
<div id="<?php print $settings['attributes']['id']; ?>" class="ir_plugin">
  <?php print theme('ir_extention_list', array('items' => $items, 'settings' => $settings)); ?>
</div>
