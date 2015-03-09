<?php
/**
 * @file
 * content_type.panopoly_page.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'panopoly_page',
  'name' => 'Content Page',
  'description' => 'An important page to display to users on your site.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.panopoly_page' => 'field.node.body.panopoly_page',
  'field.node.field_featured_categories.panopoly_page' => 'field.node.field_featured_categories.panopoly_page',
  'field.node.field_featured_image.panopoly_page' => 'field.node.field_featured_image.panopoly_page',
  'field.node.field_featured_status.panopoly_page' => 'field.node.field_featured_status.panopoly_page',
  'permission.create_panopoly_page_content' => 'permission.create_panopoly_page_content',
  'permission.edit_own_panopoly_page_content' => 'permission.edit_own_panopoly_page_content',
  'permission.edit_any_panopoly_page_content' => 'permission.edit_any_panopoly_page_content',
  'permission.delete_own_panopoly_page_content' => 'permission.delete_own_panopoly_page_content',
  'permission.delete_any_panopoly_page_content' => 'permission.delete_any_panopoly_page_content',
);

$modules = array(
  0 => 'node',
);
