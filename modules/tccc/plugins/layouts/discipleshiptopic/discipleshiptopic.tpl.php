<?php
/**
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 */
?>

<article class="layout-discipleshiptopic panel-display clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="header">
    <?php print $content['header']; ?>
  </div>
  
  <div style="clear: both"></div>
  
  <div class="content-right grid_7 push_5 alpha">
    <div class="grid_3 alpha">
      <?php print $content['content-left']; ?>
    </div>

    <?php print $content['content-right']; ?>
  </div>
  
  <div style="clear: both"></div>
  
  <div class="resources">
    <?php print $content['resources']; ?>
    <div style="clear: both"></div>
  </div>
  
  <div class="bottom">
    <?php print $content['bottom']; ?>
  </div>
  
</article>
