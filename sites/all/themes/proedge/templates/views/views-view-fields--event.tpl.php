<?php
//全部活动
//[field_image_logo] == Field: 行政部门封面图
//[title] == Content: Title
//[field_single_date] == Content: 活动日期和时间
//[edit_node] == Content: Edit link
//[ops] == Flags: Flag link

//$fields: an array of $field objects. Each one contains:
//$field->content: The output of the field.
//$field->raw: The raw data for the field, if it exists. This is NOT output safe.
//$field->class: The safe class id to use.
//$field->handler: The Views field handler object controlling this field. Do not use var_export to dump this object, as it can't handle the recursion.
//$field->inline: Whether or not the field should be inline.
//$field->inline_html: either div or span based on the above flag.
//$field->wrapper_prefix: A complete wrapper containing the inline_html to use.
//$field->wrapper_suffix: The closing tag for the wrapper.
//$field->separator: an optional separator that may appear before a field.
//$field->label: The wrap label text to use.
//$field->label_html: The full HTML of the label to use including configured element type.
?>

<div class="col-lg-4 col-md-4 col-sm-6"> 
  <div class="grid-box">
    <div class="grid-box-image event">
        <?php print $fields['field_image_logo']->content; ?>
    </div>

    <div class="grid-box-bottom event">                
          <p class="title"><?php print $fields['title']->content; ?></p>
          <p><?php print $fields['ops']->content; ?></p>
          <p><?php print $fields['field_single_date']->content; ?></p>
          <div class="grid-edit"><?php print $fields['edit_node']->content; ?></div>
          <div class="clear"></div>    
    </div>
  </div>
</div>

