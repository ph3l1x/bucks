<div class="productListContainer">
    <div class="productListContainerInner">
        <h2 class="productTitle">Bucks 4x4 <?php print $term->name; ?> Products</h2>
        <div class="productProductCount"><?php print count($nids); ?> items</div>

        <?php
        foreach ($nids as $value) {
        $node = node_load($value);
        ?>
        <div class="productItemContainer">
            <div class="productItemContainerInner">
                <div class="productLeft">
                    <img src="<?php if($node->field_main_image['und'][0]['uri']) {
                        print image_style_url('product_list', $node->field_main_image['und'][0]['uri']);
                    } else {
                        ?>  Some default image tag here
                    <?php } ?>"/>
                </div>
                <div class="productCenter">
                    <div class="productTitle">
                       <?php print $out = strlen($node->title) > 50 ? substr($node->title,0,50).'...' : $node->title; ?>
                    </div>
                    <?php if($node->field_long_description['und'][0]['value']) { ?>
                    <div class="productDesc">
                        <?php print $out = strip_tags(strlen($node->field_long_description['und'][0]['value'])) > 150 ? substr($node->field_long_description['und'][0]['value'],0,150). ' <a href="#">read more</a>' : $node->field_long_description['und'][0]['value']; ?>
                    </div>
                    <?php } ?>
                </div>
                <div class="productRight">

                </div>
            </div>
        </div>

    </div>
</div>
<?php
kpr($node);
}