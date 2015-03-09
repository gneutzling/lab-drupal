<?php
/**
 * @file
 * image_style.panopoly_image_half.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'panopoly_image_half',
  'label' => 'panopoly_image_half',
  'effects' => array(
    0 => array(
      'label' => 'Manual Crop: Reuse cropped style',
      'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
      'effect callback' => 'manualcrop_reuse_effect',
      'form callback' => 'manualcrop_reuse_form',
      'summary theme' => 'manualcrop_reuse_summary',
      'module' => 'manualcrop',
      'name' => 'manualcrop_reuse',
      'data' => array(
        'reuse_crop_style' => 'panopoly_image_full',
      ),
      'weight' => 0,
    ),
    1 => array(
      'label' => 'Scale',
      'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
      'effect callback' => 'image_scale_effect',
      'dimensions callback' => 'image_scale_dimensions',
      'form callback' => 'image_scale_form',
      'summary theme' => 'image_scale_summary',
      'module' => 'image',
      'name' => 'image_scale',
      'data' => array(
        'width' => 480,
        'height' => '',
        'upscale' => 0,
      ),
      'weight' => 1,
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'manualcrop',
  1 => 'image',
);
