<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>




  <?php
  drupal_add_library('system', 'drupal.collapse');
  drupal_add_js('misc/collapse.js');
  ?>
    <fieldset id="fieldset-id"  class = "collapsible collapsed">
    <legend> <span class="fieldset-legend">Advanced Search</span>

    </legend>
    <div class="fieldset-wrapper">
    <div class="fieldset-description">  <div class="view-filters">
        <?php print $exposed; ?>
      </div></div>
      <div class="views-exposed-form">
        <div class="views-exposed-widgets clear-block">
          <?php foreach($widgets as $id => $widget): ?>
            <div class="views-exposed-widget">
              <?php if (!empty($widget->label)): ?>
                <label for="<?php print $widget->id; ?>">
                  <?php print $widget->label; ?>
                </label>
              <?php endif; ?>
              <?php if (!empty($widget->operator)): ?>
                <div class="views-operator">
                  <?php print $widget->operator; ?>
                </div>
              <?php endif; ?>
              <div class="views-widget">
                <?php print $widget->widget; ?>
              </div>
            </div>
          <?php endforeach; ?>
          <?php if (!empty($sort_by)): ?>
            <div class="views-exposed-widget">
              <?php print $sort_by; ?>
            </div>
            <div class="views-exposed-widget">
              <?php print $sort_order; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($items_per_page)): ?>
            <div class="views-exposed-widget">
              <?php print $items_per_page; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($offset)): ?>
            <div class="views-exposed-widget">
              <?php print $offset; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($reset_button)): ?>
            <div class="views-exposed-widget">
              <?php print $reset_button; ?>
            </div>
          <?php endif; ?>
          <div class="views-exposed-widget">
            <?php print $button ?>
          </div>
        </div>
      </div>
    </div>
  </fieldset>
  
    <?php endif; ?>
  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
