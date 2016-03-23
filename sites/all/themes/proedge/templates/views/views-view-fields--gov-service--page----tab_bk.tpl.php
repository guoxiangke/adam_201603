<?php
//行政服务首页

//[title] == Content: Title
//[field_doc_required] == Content: 所需文件
//[counter]


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

  
  

  






<div>

  <!-- Nav tabs -->
  <ul class="nav nav-pills" role="tablist">
    <li role="presentation"><a href="#<?php print $fields['counter']->content; ?>" aria-controls="<?php print $fields['counter']->content; ?>" role="tab" data-toggle="tab"><?php print $fields['title']->content; ?></a></li>
  </ul>

  <!-- Tab panes -->
  <div class="tab-content">
    <div role="tabpanel" class="tab-pane" id="<?php print $fields['counter']->content; ?>"><?php print $fields['field_doc_required']->content; ?></div>
  </div>

</div>

