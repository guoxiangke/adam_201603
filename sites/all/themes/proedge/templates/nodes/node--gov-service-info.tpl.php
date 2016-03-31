<?php
/**
 * @file
 * Default theme implementation to display a node.
 */
//field_documents

?>

<?php print render($content['field_single_image']); ?>

<p class="title"><?php print $title; ?></p>
<?php print t('Updated on '); ?><span class="submitted"><?php print format_date($node->changed); ?></span>

<?php print render($content['body']); ?>



     <?php print render($content['field_gov_dept']); ?>

     <?php print render($content['field_multiple_date']); ?>

     <br><br>


<?php 

//if (!empty($content['field_doc_required'])): ?>
<?php
//foreach ($node->field_doc_required['und'] as $key => $value) {
  // dpm($value['entity']);
//  $entity = $value['entity'];
//  $entity_type = 'gov_service_doc';
//  $field_file = field_view_field($entity_type, $entity, 'field_file');
//  $field_body = field_view_field($entity_type, $entity, 'field_body');
  //$doc_title = field_view_field($entity_type, $entity, 'doc_title');
  // dpm($the_field);
  // render the field
//print $id = $value['entity']->id;
//print $doc_title = $value['entity']->doc_title;
//print drupal_render($field_body);
//print drupal_render($field_file);
//}
?>

<?php 

//endif; ?>

<?php print render($content['field_documents']); ?>
     
     
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_doc_required']);
      print render($content);
    ?>

  <?php print render($content['comments']); ?>





