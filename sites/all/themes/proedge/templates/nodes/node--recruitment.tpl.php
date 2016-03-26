<?php
/**
 * @file
 * Default theme implementation to display a node.
 */

//title
//changed
//format_date($node->changed);

//body @@
//field_employment_type @@
//field_job_category @@
//field_single_text @@
//field_salary@@
//field_location @@
//field_single_integer @@
//field_deadline @@
//field_fringe_benefits @@
//field_email @@
//field_single_text2 @@
//field_body 

?>


<div class="recruit title">
<?php print $title; ?>
</div>

<div class="recruit-details">

    <div class="row recruit">
        <div class="col-lg-6 col-md-6 col-sm-12">
          <?php print render($content['field_salary']); ?>
          <span class="post-date"><?php print format_date($node->changed); ?></span>
        </div>

        <div class="col-lg-6 col-md-6 col-sm-12">
          <?php print render($content['field_single_integer']); ?>
          <?php print render($content['field_location']); ?>
          <?php print render($content['field_email']); ?>
          <?php print render($content['field_single_text2']); ?>
        </div>
    </div>

    <p><?php print render($content['field_single_text']); ?></p>
    <p><?php print render($content['field_body']); ?></p>
    <p><?php print render($content['body']); ?></p>


      <?php print render($content['field_employment_type']); ?>
      <?php print render($content['field_job_category']); ?>
      <div class="label-tag label-pink"><?php print render($content['field_fringe_benefits']); ?></div>
      <?php print render($content['field_deadline']); ?>
</div>













     
     
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_single_text']);
      print render($content);
    ?>
  </div>

  <?php print render($content['comments']); ?>
