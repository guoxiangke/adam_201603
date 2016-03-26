<?php
/**
 * @file
 * Default theme implementation to display a node.
 */

//title
//name
//changed

//format_date($node->changed);

//body
//body und 0 summary

//notes:
//$node->field_image['und'][0]['file']['uri'];
//print $node->body['und'][0]['safe_summary'];
//print $node->body[$node->language][0]['safe_summary'];

//body
//field_gov_dept
//field_multiple_date
//field_doc_required


// $nod_ref : the referenced node Object (without Content)
// node_build_content($nod_ref); : Build Content in $nod_ref Object
// next render the content like magic

// $node represents the node object
//$wrapper = entity_metadata_wrapper('node', $node);
//$instructors = $wrapper->field_instructor->value();

//print $related['entity']->title;


//$nod_ref = node_load($content['field_doc_required']['#items'][0]['target_id']);
//node_build_content($nod_ref);
//print render($nod_ref->content['field_body']);

//$entities = entity_load('ENTITY_TYPE_NAME', array($YOUR_ENTITY_ID));
//$entity = $entities[$YOUR_ENTITY_ID];
//$field = field_get_items('ENTITY_TYPE_NAME', $entity, 'field_name');
//$output = field_view_value('ENTITY_TYPE_NAME', $entity, 'field_name', $field[$delta]);


?>


<p class="title"><?php print $title; ?></p>
<?php print t('Updated on '); ?><span class="submitted"><?php print format_date($node->changed); ?></span>

<?php print render($content['body']); ?>



     <?php print render($content['field_gov_dept']); ?>

     <?php print render($content['field_multiple_date']); ?>

     <br><br><br><br>
     
<?php
foreach ($node->field_doc_required['und'] as $key => $value) {
  // dpm($value['entity']);
  $entity = $value['entity'];
  $entity_type = 'gov_service_doc';
  $field_file = field_view_field($entity_type, $entity, 'field_file');
  $field_body = field_view_field($entity_type, $entity, 'field_body');
  //$doc_title = field_view_field($entity_type, $entity, 'doc_title');
  // dpm($the_field);
  // render the field

print $id = $value['entity']->id;
print $doc_title = $value['entity']->doc_title;
print drupal_render($field_body);
print drupal_render($field_file);


}

?>

     
     
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_doc_required']);
      print render($content);
    ?>
  </div>

  <?php print render($content['comments']); ?>





