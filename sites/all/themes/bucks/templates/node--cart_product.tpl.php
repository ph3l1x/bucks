
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
      <?php if ($node->field_cart_secondary_image_1): ?><a class="colorbox" href="<?php
      $secondary_image_1 = token_replace('[node:field_cart_secondary_image_1]', array('node' => $node));
      print $secondary_image_1;
        ?>">
      <div class="secondary-images-first secondary-images">
        <?php
        $secondary_image_1 = field_get_items('node', $node, 'field_cart_secondary_image_1');

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
        
       </div></a><?php endif; ?><?php if ($node->field_cart_secondary_image_2): ?><a class="colorbox" href="  <?php
        $secondary_image_2 = token_replace('[node:field_cart_secondary_image_2]', array('node' => $node));
        print $secondary_image_2;
          ?>">
      <div class="secondary-images-second secondary-images">
        <?php
        $secondary_image_2 = field_get_items('node', $node, 'field_cart_secondary_image_2');

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
     <?php if ($node->field_cart_secondary_image_3): ?><a class="colorbox" href="  <?php
        $secondary_image_3 = token_replace('[node:field_cart_secondary_image_3]', array('node' => $node));
        print $secondary_image_3;
          ?>">
      <div class="secondary-images-third secondary-images">

        <?php
        $secondary_image_3 = field_get_items('node', $node, 'field_cart_secondary_image_3');

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
</div>


<div class="product-catalog-page-right">
  <div class="inner">
      <div class="product-catalog-links">
<?php print render($content); ?>
      
      
   <div class="clear-all"></div>
      <?php if (!empty($node->body)): ?><div class="catalog-body"><?php print $node->body['und'][0]['value']; ?></div><?php endif; ?>
      
  </div>  
</div>
</div>
