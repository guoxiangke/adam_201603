<?php
//资金
//[title] == Content: Title
//[created] == Content: Post date
//[field_price_range] == Content: 融资区间
//[field_image_logo] == Field: 行政部门封面图
//[field_image_logo-fid] == Raw fid
//[field_image_logo-alt] == Raw alt
//[field_image_logo-title] == Raw title
//[field_image_logo-width] == Raw width
//[field_image_logo-height] == Raw height

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


<div class="col-lg-3 col-md-3 col-sm-6">			 
    <div class="grid-box">
        <div class="grid-box-image event">
            <?php print $fields['field_image_logo']->content; ?>
        </div>
      
        <div class="grid-box-bottom event">                
            <p class="title"><?php print $fields['title']->content; ?></p>
            <p><?php print $fields['created']->content; ?></p>
            <p><?php print $fields['field_price_range']->content; ?></p>

            <div class="clear"></div>              
        </div>
    </div>
</div>


