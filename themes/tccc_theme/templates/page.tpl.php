<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

  <div id="page">
  
    <div id="toolbar-gap"></div>


    <?php if ($page['header']): ?>
      <div id="header-wrapper">
        <div id="header-container" class="container_12 clearfix">
          <div id="header" class="grid_12 clearfix">
            <?php print render($page['header']); ?>
          </div> <!-- /#header -->
        </div> <!-- #header-container -->
      </div> <!-- #header-wrapper -->
    <?php endif; ?>


    <div id="main-wrapper">
    <div id="main-wrapper-inside">
      <div id="main-container" class="container_12 clearfix">
      
      
        <?php

          // you may set these two things
          $sidebar_first_width = 3;
          $sidebar_second_width = 3;
        
          $main_width = 12;
          $main_push = 0;

          if (!empty($page['sidebar_first'])) {
            $main_width = $main_width - $sidebar_first_width;
            $main_push = $sidebar_first_width;
          }
          if (!empty($page['sidebar_second'])) {
            $main_width = $main_width - $sidebar_second_width;
          }
        
        ?>
      
        <div class="grid_<?php print $main_width; ?> push_<?php print $main_push; ?> clearfix">
          <div id="main">
      
            <div id="content-top">
              <?php print $messages; ?>
              <a id="main-content"></a>
              <?php if ($title || $tabs || $page['help'] || $action_links): ?>
                <div class="b">
                  <?php print render($title_prefix); ?>
                  <?php if ($title && !$is_front): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
                  <?php print render($title_suffix); ?>
                  <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
                  <?php print render($page['help']); ?>
                  <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
                </div>
              <?php endif; ?>
            </div> <!-- /#content-top -->
            
            <div id="content">
              <?php print render($page['content']); ?>
            </div> <!-- /#content -->

          </div> <!-- /#main -->
        </div> <!-- /.grid-n -->


        <?php if (!empty($page['sidebar_first'])): ?>        
          <div class="grid_<?php print $sidebar_first_width; ?> clearfix pull_<?php print $main_width; ?>">
            <div id="sidebar-first">
              <?php print render($page['sidebar_first']); ?>
            </div>
          </div>
        <?php endif; ?>        
        
        
        <?php if (!empty($page['sidebar_second'])): ?>        
          <div class="grid_<?php print $sidebar_second_width; ?> clearfix">
            <div id="sidebar-second">
              <?php print render($page['sidebar_second']); ?>
            </div>
          </div>
        <?php endif; ?>
        
        
      </div> <!-- /#main-container -->
    </div> <!-- /#main-wrapper-inside -->
    </div> <!-- /#main-wrapper -->


  <?php if ($page['footer']): ?>
    <div id="footer-wrapper">
      <div id="footer-container" class="container_12 clearfix">
        <div id="footer" class="grid_12 clearfix">
          <?php print render($page['footer']); ?>
        </div> <!-- /#footer -->
      </div> <!-- #footer-container -->
    </div> <!-- #footer-wrapper -->
  <?php endif; ?>


  </div> <!-- /#page -->



  
  
  