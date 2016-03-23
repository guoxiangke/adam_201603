<?php
//行政服务首页



//[field_image_logo] == Field: 行政部门封面图
//[description] == Taxonomy term: Term description
//[counter] == Global: View result counter
//[title] == Content: Title
//[field_doc_required] == Content: 所需文件
//[field_doc_required-target_id] == Raw target_id
//[body] == Content: 内容
//[field_multiple_date] == Content: 申报日期
//[field_multiple_date-value] == Raw value
//[field_multiple_date-value2] == Raw value2
//[field_single_image] == Field: 流程图


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



<?php print $fields['field_image_logo']->content; ?>

<?php print $fields['description']->content; ?>


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
          <?php print $fields['field_single_image']->content; ?>
          <?php print $fields['body']->content; ?>
          <?php print $fields['field_doc_required']->content; ?>
          <?php print $fields['field_multiple_date']->content; ?>
        </div>
      </div>
    </div>
    
  </div>





