<?php
/**
 * @file
 * downloadable_jump_menu.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function downloadable_jump_menu_taxonomy_default_vocabularies() {
  return array(
    'forms_categories' => array(
      'name' => 'Forms Categories',
      'machine_name' => 'forms_categories',
      'description' => 'Categories for the forms downloader',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
