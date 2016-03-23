<?php
//活动报名用户
//[picture] == User: Picture
//[name] == User: Name

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

<div class="row right-block">
          	<div class="col-lg-3 col-md-3 col-sm-6">
				<div class="event-signup-user">
				<?php print $fields['picture']->content; ?>
				</div>
				<p><?php print $fields['name']->content; ?></p>
				
			</div>
</div>












