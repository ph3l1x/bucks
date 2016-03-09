
<div class="product-catalog-page-left">
  <div class="inner"><?php if ($node->field_image): ?><a class="colorbox" href="  <?php
    $field_image = token_replace('[node:field_image]', array('node' => $node));
    print $field_image;
      ?>">
    <div class="primary-image">
    <?php
    
    $primary_image = field_get_items('node', $node, 'field_image');

    if (!empty($primary_image)) {

      $image_item = array(
        'style_name' => '312x312', // just enter the style name you'd like
        'path' => $primary_image[0]['uri'],
        'width' => '',
        'height' => '',
        'alt' => $primary_image[0]['alt'], // optional
        'title' => $primary_image[0]['title'], // optional
      );

      $output =  theme('image_style', $image_item);

      print $output;
    }
    ?>
    
    </div></a><?php endif; ?>
    <div class="clear-all"></div>

    <div class="secondary-images-wrapper">
      <?php if ($node->field_pro_secondary_image_1): ?><a class="colorbox" href="<?php
      $secondary_image_1 = token_replace('[node:field_pro_secondary_image_1]', array('node' => $node));
      print $secondary_image_1;
        ?>">
      <div class="secondary-images-first secondary-images">
        <?php
        $secondary_image_1 = field_get_items('node', $node, 'field_pro_secondary_image_1');

        if (!empty($secondary_image_1)) {

          $image_item = array(
            'style_name' => '100x100', // just enter the style name you'd like
            'path' => $secondary_image_1[0]['uri'],
            'width' => '',
            'height' => '',
            'alt' => $secondary_image_1[0]['alt'], // optional
            'title' => $secondary_image_1[0]['title'], // optional
          );

          $output =  theme('image_style', $image_item);

          print $output;
        }
        ?>
        
       </div></a><?php endif; ?><?php if ($node->field_pro_secondary_image_2): ?><a class="colorbox" href="  <?php
        $secondary_image_2 = token_replace('[node:field_pro_secondary_image_2]', array('node' => $node));
        print $secondary_image_2;
          ?>">
      <div class="secondary-images-second secondary-images">
        <?php
        $secondary_image_2 = field_get_items('node', $node, 'field_pro_secondary_image_2');

        if (!empty($secondary_image_2)) {

          $image_item = array(
            'style_name' => '100x100', // just enter the style name you'd like
            'path' => $secondary_image_2[0]['uri'],
            'width' => '',
            'height' => '',
            'alt' => $secondary_image_2[0]['alt'], // optional
            'title' => $secondary_image_2[0]['title'], // optional
          );

          $output =  theme('image_style', $image_item);

          print $output;
        }
        ?>
        
        </div></a><?php endif; ?>
     <?php if ($node->field_pro_secondary_image_3): ?><a class="colorbox" href="  <?php
        $secondary_image_3 = token_replace('[node:field_pro_secondary_image_3]', array('node' => $node));
        print $secondary_image_3;
          ?>">
      <div class="secondary-images-third secondary-images">

        <?php
        $secondary_image_3 = field_get_items('node', $node, 'field_pro_secondary_image_3');

        if (!empty($secondary_image_3)) {

          $image_item = array(
            'style_name' => '100x100', // just enter the style name you'd like
            'path' => $secondary_image_3[0]['uri'],
            'width' => '',
            'height' => '',
            'alt' => $secondary_image_3[0]['alt'], // optional
            'title' => $secondary_image_3[0]['title'], // optional
          );

          $output =  theme('image_style', $image_item);

          print $output;
        }
        ?>
        
        </div></a><?php endif; ?>
    </div>

    <div class="clear-all"></div>

      

  </div>
                      <?php if (!empty($node->field_learn_more_link)): ?><div class="field-learn-more-link link-red-45-square"><div class="content"><?php print render($content['field_learn_more_link']); ?></div></div><? endif; ?>
</div>


<div class="product-catalog-page-right">
  <div class="inner">
      <div class="product-catalog-links">
        <?php if (!empty($node->field_product_price)): ?><span class="product-catalog-link first"><?php print $node->field_product_price['und'][0]['value']; ?></span><? endif; ?>
                <?php if (!empty($node->field_pay_now_embed_code)): ?><span class="product-catalog-link second"><?php print $node->field_pay_now_embed_code['und'][0]['value']; ?></span><? endif; ?>
      </div>
      
      
   <div class="clear-all"></div>
      <?php if (!empty($node->body)): ?><div class="catalog-body"><?php print $node->body['und'][0]['value']; ?></div><?php endif; ?>
      
  </div>  
</div>









