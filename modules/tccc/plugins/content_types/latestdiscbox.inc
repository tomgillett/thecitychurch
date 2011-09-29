<?php

$plugin = array(
  'title' => 'Latest Discipleship Box',
  'category' => 'TCCC',
  'single' => TRUE,
);


function tccc_latestdiscbox_content_type_render($subtype, $conf, $args, $context) {

  $result = _tccc_get_media('discipleship_topic', 1);    
  $output = '';
  
  if($result){
    
    foreach($result as $topic){
      
      $img = _tccc_media_image($topic, 'resources_feature');
      $img .= '<div class="shine-resource-button"></div>';

      $output .= l($img, 'node/' . $topic->nid, array('html' => TRUE, 'attributes' => array('class' => array('box-image'))));
      
      $output .= '<div class="text">';
      $output .= '<div>' . l($topic->title, 'discipleship') . '</div>';
      $output .= '<div>' . date('l jS F Y', $topic->created) . '</div>';
      
      $person = (!empty($topic->field_person)) ? taxonomy_term_load($topic->field_person['und'][0]['tid']): '';
      $output .= '<div>by ' . l(check_plain($person->name), 'taxonomy/term/' . $person->tid) . '</div>' ;
      $output .= '</div>';
    }
    
  }
                                 
  $block = new stdClass;
  $block->title = 'Discipleship';
  $block->content = $output;
  return $block;
}


function tccc_latestdiscbox_content_type_edit_form($form, &$form_state) {
  return $form;
}

function tccc_latestdiscbox_content_type_admin_title($subtype, $conf, $context) {
  return 'Latest Discipleship Box';
}
