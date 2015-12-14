<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<!--
THIS FILE IS NOT USED AND IS HERE AS A STARTING POINT FOR CUSTOMIZATION ONLY.
See http://api.drupal.org/api/function/theme_field/7 for details.
After copying this file to your theme's folder and customizing it, remove this
HTML comment.
-->


<?php
    $count = count($items);
?>
<?php if ($element['#view_mode']!='teaser') : ?>

    <div class="slide-wrapper <?php print $classes; ?>"<?php print $attributes; ?>>
    <!-- START THE Slide Navigation HERE -->


            <?php if ($count>1) : ?>
                <div id="slideNav">
                    <ul class="slideThumb-wrapper">
                        <li id="prevslide"><i class="fa fa-backward"></i></li>
                        <?php foreach ($items as $delta => $item): ?>
                            <li class= "slideThumb thumb<?php print $delta; ?>" slideThumb = "<?php print $delta; ?>">
                                <span class="slideThumb-text <?php if ($delta==0) : ?><?php print 'underline' ?><?php endif; ?>"><?php print $delta +1; ?></span>
                            </li>
                        <?php endforeach; ?>
                        <li id="nextslide"><i class="fa fa-forward"></i></li>
                    </ul>

                </div>
            <?php endif; ?>

    <!-- END THE Slide Navigation HERE -->

    <!-- START THE MEDIA CONTENT HERE -->

            <div class="field-items"<?php print $content_attributes; ?>>
                <?php foreach ($items as $delta => $item): ?>
                    <div class="slide <?php if ($delta==0) : ?><?php print 'active' ?><?php endif; ?>" slide="<?php print $delta; ?>" <?php if ($delta>0) : ?><?php print 'style="display:none;"' ?>                            <?php endif; ?>>
                        <?php print render($item); ?>
                    </div>
                <?php endforeach; ?>
            </div>
    </div>



    <!-- END THE MEDIA CONTENT -->



    <script>
        jQuery( document ).ready(function($) {
            $('.slideThumb').on('click', function(e){
                var slide = $(this).attr('slideThumb');
                console.log(slide);
                $('div.slide').hide();
                $('div.slide').removeClass('active');
                $('.slideThumb-text').removeClass('underline');
                $("div").find("[slide='" + slide + "']").show();
                $("div").find("[slide='" + slide + "']").addClass('active');
                $(this).children('span').addClass('underline');
            });

            $('#prevslide').on('click', function(e){
                var newslide;
                var maxId = <?php print $count -1; ?>;
                var slideid = $('div.slide.active').attr('slide');
                console.log(slideid);
                if (parseInt(slideid) == 0) {
                    newslide = maxId;
                } else {
                    newslide = parseInt(slideid) -1;
                }
                $('div.slide').hide();
                $('div.slide').removeClass('active');
                $('li.slideThumb span').removeClass('underline');
                $("div").find("[slide='" + newslide + "']").show();
                $("div").find("[slide='" + newslide + "']").addClass('active');
                $(".thumb"+ newslide).children('span').addClass('underline');
            });

            $('#nextslide').on('click', function(e){
                var newslide;
                var maxId = <?php print $count -1; ?>;
                var slideid = $('div.slide.active').attr('slide');
                if (parseInt(slideid) == maxId) {
                    newslide = 0;
                } else {
                    newslide = parseInt(slideid) +1;
                }
                $('div.slide').hide();
                $('div.slide').removeClass('active');
                $('li.slideThumb span').removeClass('underline');
                $("div").find("[slide='" + newslide + "']").show();
                $("div").find("[slide='" + newslide + "']").addClass('active');
                $(".thumb"+ newslide).children('span').addClass('underline');
            });



        });
    </script>
<?php endif; ?>

<?php if ($element['#view_mode']=='teaser') : ?>
    <?php print render($items[0]); ?>
<?php endif; ?>
