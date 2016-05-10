/////// FLAG HTML ///////////
<div class="flagContainer">
    <div class="flagContainerInner">
        <div class="flagLeft">LEFT</div>
        <div class="flagCenterContainer">
            <div class="flagCenterContainerInner">
                <div class="flagCenterContent">Some info that we want in banner goes here.</div>
            </div>
        </div>
        <div class="flagRight">RIGHT</div>
    </div>
</div>
///////////////////////////



<?php

if ($rowData[0][5]) {
    $product->field_bullet_points['und'][0]['value'] = $rowData[0][5];
}
if ($rowData[0][6]) {
    $product->field_bullet_points['und'][1]['value'] = $rowData[0][6];
}
if ($rowData[0][7]) {
    $product->field_bullet_points['und'][2]['value'] = $rowData[0][7];
}
if ($rowData[0][8]) {
    $product->field_bullet_points['und'][3]['value'] = $rowData[0][8];
}
if ($rowData[0][9]) {
    $product->field_bullet_points['und'][4]['value'] = $rowData[0][9];
}
if ($rowData[0][10]) {
    $product->field_bullet_points['und'][5]['value'] = $rowData[0][10];
}
if ($rowData[0][11]) {
    $product->field_bullet_points['und'][6]['value'] = $rowData[0][11];
}
if ($rowData[0][12]) {
    $product->field_bullet_points['und'][7]['value'] = $rowData[0][12];
}


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