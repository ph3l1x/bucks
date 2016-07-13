<?php
error_reporting(0);
/* Connect to database */
$db = new mysqli('localhost', 'root', 'giznad0', 'bucks');
if ($db->connect_errno > 0) {
    die('Inable to connect to database [' . $db->connect_error . ']');
}

/* Bootstrap Drupal */
chdir('/var/www/bucks.mindimage.net');
define('DRUPAL_ROOT', getcwd());

require_once('./includes/bootstrap.inc');
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
$apiKey = 'xx695j4ngysbvtdprfz96srh';
//$jsonURL = 'http://api.edmunds.com/api/vehicle/v2/makes?fmt=json&api_key=' . $apiKey;
$jsonURL = 'http://api.edmunds.com/api/vehicle/v2/gmc?fmt=json&api_key=' . $apiKey;

$jsonData = json_decode(file_get_contents($jsonURL));


$mmy = array();
$makes = array();
$models = array();

function tax_create($termName, $vid, $parent, $ignore) {

    $tid = key(taxonomy_get_term_by_name($termName));

  //  var_dump($termName);
    if($tid && !$ignore) {
        $tax = taxonomy_term_load($tid);
        $tax->exists = '1';
        return $tax;

    } else {
        $term = new stdClass();
        $term->name = $termName;
        $term->vid = $vid;
        if($parent) {
            $term->parent = $parent;
        }
        taxonomy_term_save($term);
        return $term;
    }
}

/* gor individual makes  http://api.edmunds.com/api/vehicle/v2/gmc?fmt=json */
$makes = tax_create($jsonData->name, '27', NULL);
$makeTID = $makes->tid;
print "Added Make: " . $jsonData->name . "\r\n";
foreach($jsonData->models as $model) {
    $models = tax_create($model->name, '27', $makeTID);
    $modelTID = $models->tid;
    print "--Added Model: " . $model->name . "\r\n";
    foreach($model->years as $year) {
        $years = tax_create($year->year, '27', $modelTID, 'ignore');
        print "----Added Year: " . $year->year . "\r\n";
    }
}

/* for http://api.edmunds.com/api/vehicle/v2/makes?fmt=json */
//foreach($jsonData->makes as $make) {
//    $makes = tax_create($make->name, '27', NULL);
//    $makeTID = $makes->tid;
//    print "Added Make: " . $make->name . "\r\n";
//    foreach($make->models as $model) {
//        $models = tax_create($model->name, '27', $makeTID);
//        $modelTID = $models->tid;
//        print "--Added Model: " . $model->name . "\r\n";
//        foreach($model->years as $year) {
//            $years = tax_create($year->year, '27', $modelTID, 'ignore');
//            print "----Added Year: " . $year->year . "\r\n";
//        }
//    }
//}

//print "<pre>";print_r($mmy);print "</pre>";




//function productID() {
//    global $db;
//
//    $sql = <<<SQL
//    SELECT product_id
//    FROM commerce_product
//SQL;
//    $result = $db->query($sql);
//    $results = array();
//
//    while ($row = $result->fetch_assoc()) {
//        $results[] = $row['product_id'];
//    }
//    return $results;
//}
//
//
//function makeList($productIDs) {
//    global $db;
//    $ids = implode(',', $productIDs);
//
//
//        $sql = <<<SQL
//SELECT field_make_tid
//FROM field_data_field_make
//WHERE entity_id in ({$ids})
//SQL;
//
//    $result = $db->query($sql);
//    $results = array();
//    while($row = $result->fetch_assoc()) {
//        $results[] = $row['field_make_tid'];
//    }
//    return $results;
//}
//function getTaxNameFromID($tid) {
//    $term = taxonomy_term_load($tid);
//    return $term->name;
//}
//



//echo "<pre>";
////print_r(productID());
//print_r(makeList(productID()));
//echo "</pre>";
?>



