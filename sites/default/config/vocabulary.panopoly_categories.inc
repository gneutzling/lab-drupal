<?php
/**
 * @file
 * vocabulary.panopoly_categories.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '1',
  'name' => 'Categories',
  'machine_name' => 'panopoly_categories',
  'description' => 'This is a sitewide taxonomy of categories to organize the content on your site!',
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
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
