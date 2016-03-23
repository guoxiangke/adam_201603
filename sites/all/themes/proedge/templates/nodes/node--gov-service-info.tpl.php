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



//body
//field_gov_dept
//field_multiple_date
//field_doc_required

?>




<p class="title"><?php print $title; ?></p>
<?php print t('Updated on '); ?><span class="submitted"><?php print format_date($node->changed); ?></span>

<?php print render($content['body']); ?>



     <?php print render($content['field_gov_dept']); ?>

     <?php print render($content['field_multiple_date']); ?>
     
    <?php print render($content['field_doc_required']); ?>
     
     
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['comments']); ?>





 <div class="panel-group" id="accordion">
    <div class="panel panel-default">
      <div class="panel-heading">
        <h4 class="panel-title">
          <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#collapse<?php print $fields['counter']->content; ?>">
            <?php print $fields['title']->content; ?>
          </a>
        </h4>
      </div>
      
      <div id="collapse<?php print $fields['counter']->content; ?>" class="panel-collapse collapse <?php if($fields['counter']->content == '0'): ?>in<?php endif; ?>">
      
      
        <div class="panel-body">
           <?php print render($content['field_doc_required']); ?>
        </div>
      </div>
    </div>
    
  </div>