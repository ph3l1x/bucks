<?php
$tids = $items[0]['#data'];
print '<div class="' . $classes . '"><div class="field-make-model-year-label">Make / Model / Year:</div>';
foreach($tids as $item) {
    $termYear = taxonomy_get_parents_all($item['tid'])[0]->name;
    $termModel = taxonomy_get_parents_all($item['tid'])[1]->name;
    $termMake = taxonomy_get_parents_all($item['tid'])[2]->name;

    ?>
<ul>
    <li class="make-model-year">Make: <?php print $termMake; ?></li>
    <li class="make-model-year">Model: <?php print $termModel; ?></li>
    <li class="make-model-year">Year: <?php print $termYear; ?></li>
</ul>
<?php } print '</div>';

