<?php
/**
 * @file
 * tm_new_product_notification_2014.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tm_new_product_notification_2014_default_rules_configuration() {
  $items = array();
  $items['rules_new_product_notification'] = entity_import('rules_config', '{ "rules_new_product_notification" : {
      "LABEL" : "New Product Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Product Catalog" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--catalog_product" : { "bundle" : "catalog_product" } },
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "A new product has been added.",
            "message" : "Hello,\\r\\n\\r\\nA new product has been added to your product catalog. See details below:\\r\\n\\r\\nManufacturer: [node:field-catalog-manufacturer]\\r\\nFamily: [node:field-catalog-family]\\r\\nTitle: [node:title]\\r\\n\\r\\nTo see the product on your site click the link below, or copy and paste it into your browser address bar.\\r\\n[node:url]\\r\\n\\r\\nIf you have opted to have new products unpublished by default, you will need to publish it before it will be visible to your customers. To publish this product, log into your site and click the link above. Click the edit tab and scroll to the bottom of the page. Under publishing options, check \\u0022Published\\u0022 and click \\u0022Save.\\u0022 You can follow the same process if you need to keep this product from displaying in your catalog and just uncheck \\u0022Published.\\u0022\\r\\n\\r\\nIf you have any questions click the link below and fill out the form.\\r\\nhttp:\\/\\/www.dealermarketing.net\\/support\\r\\n\\r\\nThank you for the opportunity to serve your dealership!\\r\\n\\r\\nThe Dealer Marketing Team",
            "from" : "support@dealermarketing.net",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
