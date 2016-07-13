<?php


if($rowData[0][31]) {
    $catParent = taxonomy_create($rowData[0][31], '12', NULL);
    $catTid = $catParent;
};
if($rowData[0][32]) {
    $cat1 = taxonomy_create($rowData[0][32], '12', $catParent->tid);
    $catTid = $cat1;
};
if($rowData[0][33]) {
    $cat2 = taxonomy_create($rowData[0][33], '12', $cat1->tid);
    $catTid = $cat2;
};
if($rowData[0][34]) {
    $cat3 = taxonomy_create($rowData[0][34], '12', $cat2->tid);
    $catTid = $cat3;
};
if($rowData[0][35]) {
    $cat4 = taxonomy_create($rowData[0][35], '12', $cat3->tid);
    $catTid = $cat4;
};
if($rowData[0][36]) {
    $cat5 = taxonomy_create($rowData[0][36], '12', $cat4->tid);
    $catTid = $cat5;
}
if($rowData[0][37]) {
    $cat6 = taxonomy_create($rowData[0][37], '12', $cat5->tid);
    $catTid = $cat6;
};
if($rowData[0][38]) {
    $cat7 = taxonomy_create($rowData[0][38], '12', $cat6->tid);
    $catTid = $cat7;
};
if($rowData[0][39]) {
    $cat8 = taxonomy_create($rowData[0][39], '12', $cat7->tid);
    $catTid = $cat8;
};
if($rowData[0][40]) {
    $cat9 = taxonomy_create($rowData[0][40], '12', $cat8->tid);
    $catTid = $cat9;
};
if($rowData[0][41]) {
    $cat10 = taxonomy_create($rowData[0][41], '12', $cat9->tid);
    $catTid = $cat10;
};
$product->field_category['und'][0]['tid'] = $catTid->tid;



if ($rowData[0][36]) {
    $year_field = explode('|', $rowData[0][36]);
    if (is_array($year_field)) {
        foreach ($year_field as $key => $value) {
            $product->field_year['und'][$key]['tid'] = taxonomy_create($value, 4, NULL)->tid;
        }
    }
}
if ($rowData[0][37]) {
    $make_field = explode('|', $rowData[0][37]);
    if (is_array($make_field)) {
        foreach ($make_field as $key => $value) {
            $product->field_make['und'][$key]['tid'] = taxonomy_create($value, 5, NULL)->tid;
        }
    }
}
if ($rowData[0][38]) {
    $model_field = explode('|', $rowData[0][38]);
    if (is_array($model_field)) {
        foreach ($model_field as $key => $value) {
            $product->field_model['und'][$key]['tid'] = taxonomy_create($value, 6, NULL)->tid;
        }
    }
}
?>