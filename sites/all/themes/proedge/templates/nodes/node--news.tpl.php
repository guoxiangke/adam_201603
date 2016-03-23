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

//field_image
//field_info_category
//field_category



?>

<div class="row margin-top-20">
    <div class="col-lg-5 col-md-5 col-sm-12">
      <?php print render($content['field_image']); ?>
    </div>

    <div class="col-lg-7 col-md-7 col-sm-12">
        <p class="title"><?php print $title; ?></p>
        <?php print t('Updated on '); ?><span class="submitted"><?php print format_date($node->changed); ?></span>
        <?php print $node->body['und'][0]['safe_summary']; ?>
        <div class="label-tag label-blue"><?php print render($content['field_category']); ?></div>         
    </div>
</div>


<div class="clear"></div>

  <div class="content-body">

     <?php print render($content['body']); ?>

     <?php print render($content['field_info_category']); ?>
     
     
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['comments']); ?>
