<?php
/**
 * @file
 * content_type.lista_geral.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'lista_geral',
  'name' => 'Lista Geral',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Lista Geral',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array();

$optional = array(
  'field.node.body.lista_geral' => 'field.node.body.lista_geral',
  'permission.create_lista_geral_content' => 'permission.create_lista_geral_content',
  'permission.edit_own_lista_geral_content' => 'permission.edit_own_lista_geral_content',
  'permission.edit_any_lista_geral_content' => 'permission.edit_any_lista_geral_content',
  'permission.delete_own_lista_geral_content' => 'permission.delete_own_lista_geral_content',
  'permission.delete_any_lista_geral_content' => 'permission.delete_any_lista_geral_content',
);

$modules = array(
  0 => 'node',
);
