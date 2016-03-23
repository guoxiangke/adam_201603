<?php
//招聘首页
//[title] == Content: Title
//[field_location] == Content: 地点
//[created] == Content: Post date
//[field_salary] == Content: 待遇
//[field_single_text] == Field: 手提号码
//[field_job_category] == Content: 职位类别
//[field_employment_type] == Content: 雇用性质
//[field_fringe_benefits] == Content: 福利
//[field_fringe_benefits-value] == Raw value
//[field_email] == Content: 电邮
//[field_real_auth] == Profile: 实名认证
//[field_real_auth-value] == Raw value


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
          	<div class="col-lg-6 col-md-6 col-sm-12">
			 	<div class="list-box-left recruit">
				 	<div class="inline">
				 	<span class="title"><?php print $fields['title']->content; ?></span>
				 	<span class="location"><?php print $fields['field_location']->content; ?></span>
				 	<span class="post-date"><?php print $fields['created']->content; ?></span>
				 	</div>

					<div class="salary">
					<?php print $fields['field_salary']->content; ?>
				 	</div>

				 	<div class="label-tag label-pink">
					<?php print $fields['field_fringe_benefits']->content; ?>
				 	</div>
				</div>
			</div>

			<div class="col-lg-6 col-md-6 col-sm-12">
				<div class="list-box-right recruit">
					<div class="inline">            
				        <span class="title"><?php print $fields['field_single_text']->content; ?></span>
				        <span class="label-tag label-orange"><?php print $fields['field_real_auth']->content; ?></span>
			        </div>
			        
			        <div><?php print $fields['field_email']->content; ?></div>    
				</div>
			</div>
		</div>


