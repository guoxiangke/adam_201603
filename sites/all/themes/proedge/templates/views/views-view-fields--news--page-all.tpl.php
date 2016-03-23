<?php
//综合信息首页
//[field_image] == Content: 图片
//[title] == Content: Title
//[changed] == Content: Updated date
//[field_category] == Content: 类别标签
//[comment_count] == Content: Comment count
//[body] == Content: 内容
//[body-value] == Raw value
//[body-summary] == Raw summary
//[body-format] == Raw format


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



        <div class="row list-box">
          	<div class="col-lg-4 col-md-4 col-sm-12">
				<div class="list-box-image news">
				<?php print $fields['field_image']->content; ?>
				</div>
			</div>

			<div class="col-lg-8 col-md-8 col-sm-12">
				  <div class="list-box-right news">                
				        <p class="title"><?php print $fields['title']->content; ?></p>
				        <div class=""><?php print $fields['changed']->content; ?></div>
				        
				        <div class="comment-count"><?php print $fields['comment_count']->content; ?></div>
				        <div class="label-tag label-blue"><?php print $fields['field_category']->content; ?></div>

				        <p><?php print $fields['body']->content; ?></p>
				           
				        
				    </div>
			</div>
		</div>


