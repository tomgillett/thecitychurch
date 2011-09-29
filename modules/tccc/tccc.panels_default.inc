<?php

/**
 * @file
 * Bulk export of panels_default objects generated by Bulk export module.
 */

/**
 * Implementation of hook_default_panels_mini()
 */
function tccc_default_panels_mini() {
  $minis = array();

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'media_landing_boxes';
  $mini->category = '';
  $mini->admin_title = 'Media Landing Boxes';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'sixboxes';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'box_1' => NULL,
      'box_2' => NULL,
      'box_3' => NULL,
      'box_4' => NULL,
      'box_5' => NULL,
      'box_6' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'box_1';
    $pane->type = 'latesttalkbox';
    $pane->subtype = 'latesttalkbox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'width' => '',
        'prefix' => '',
        'suffix' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
        'debug' => 1,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['box_1'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'box_2';
    $pane->type = 'latestseriesbox';
    $pane->subtype = 'latestseriesbox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'width' => '',
        'prefix' => '',
        'suffix' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
        'debug' => 1,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['box_2'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'box_3';
    $pane->type = 'latestdiscbox';
    $pane->subtype = 'latestdiscbox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'width' => '',
        'prefix' => '',
        'suffix' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
        'debug' => 1,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['box_3'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'box_4';
    $pane->type = 'latestmusicbox';
    $pane->subtype = 'latestmusicbox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'width' => '',
        'prefix' => '',
        'suffix' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
        'debug' => 1,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['box_4'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'box_5';
    $pane->type = 'latestpaperbox';
    $pane->subtype = 'latestpaperbox';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'width' => '',
        'prefix' => '',
        'suffix' => '',
        'push' => '',
        'pull' => '',
        'alpha' => 0,
        'omega' => 0,
        'debug' => 1,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['box_5'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $minis['media_landing_boxes'] = $mini;

  $mini = new stdClass;
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'topic_related_content';
  $mini->category = '';
  $mini->admin_title = 'Topic Related Content';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display;
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'disc_topic_related';
    $pane->subtype = 'disc_topic_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type_1' => 'sermon',
      'type_2' => 'none',
      'form_build_id' => 'form-4gywFsQxTTYX3qcSYUwsocCxq-Dn8r_d7d-CatH5rPY',
      'form_token' => 'bCJJVsNTRbA3zq7lZH4T0WcgLfjG1yR0UOgGGUtOi-M',
      'form_id' => 'tccc_disc_topic_related_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => 'Related Sermon Clips',
      'type' => array(
        'sermon' => 'sermon',
        'none' => 0,
        'panel' => 0,
        'discipleship_home' => 0,
        'discipleship_topic' => 0,
        'event' => 0,
        'home' => 0,
        'music' => 0,
        'page' => 0,
        'paper' => 0,
        'person' => 0,
        'resources_landing_page' => 0,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'disc_topic_related';
    $pane->subtype = 'disc_topic_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type_1' => 'none',
      'type_2' => 'none',
      'form_build_id' => 'form-M32r4gk2o_HpQpiwTTWZIgn-Xwh8SeqOrV7RNnq3mLw',
      'form_token' => 'bCJJVsNTRbA3zq7lZH4T0WcgLfjG1yR0UOgGGUtOi-M',
      'form_id' => 'tccc_disc_topic_related_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => 'Resources',
      'type' => array(
        'book' => 'book',
        'paper' => 'paper',
        'website' => 'website',
        'none' => 0,
        'panel' => 0,
        'discipleship_home' => 0,
        'discipleship_topic' => 0,
        'event' => 0,
        'home' => 0,
        'music' => 0,
        'page' => 0,
        'person' => 0,
        'resources_landing_page' => 0,
        'sermon' => 0,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $mini->display = $display;
  $minis['topic_related_content'] = $mini;

  return $minis;
}