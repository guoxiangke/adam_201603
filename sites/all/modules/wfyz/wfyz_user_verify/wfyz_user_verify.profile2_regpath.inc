<?php
/**
 * @file
 * wfyz_user_verify.profile2_regpath.inc
 */

/**
 * Implements hook_default_profile2_regpath().
 */
function wfyz_user_verify_default_profile2_regpath() {
  $export = array();

  $regpath = new stdClass();
  $regpath->disabled = FALSE; /* Edit this to true to make a default regpath disabled initially */
  $regpath->api_version = 1;
  $regpath->profile_type = 'company';
  $regpath->path = '';
  $regpath->roles = 'a:7:{i:6;s:1:"6";i:3;i:0;i:4;i:0;i:5;i:0;i:8;i:0;i:9;i:0;i:7;i:0;}';
  $regpath->status = 1;
  $regpath->weight = 4;
  $regpath->misc = 'a:9:{s:9:"path_type";s:4:"tabs";s:8:"tab_text";s:0:"";s:13:"fieldset_wrap";i:0;s:13:"custom_titles";i:0;s:11:"login_title";s:12:"User Account";s:14:"register_title";s:12:"User Account";s:14:"password_title";s:12:"User Account";s:20:"confirmation_display";i:0;s:20:"confirmation_message";s:0:"";}';
  $export['company'] = $regpath;

  $regpath = new stdClass();
  $regpath->disabled = FALSE; /* Edit this to true to make a default regpath disabled initially */
  $regpath->api_version = 1;
  $regpath->profile_type = 'individual';
  $regpath->path = '';
  $regpath->roles = 'a:7:{i:3;i:0;i:4;i:0;i:6;i:0;i:5;i:0;i:8;i:0;i:9;i:0;i:7;i:0;}';
  $regpath->status = 0;
  $regpath->weight = 0;
  $regpath->misc = 'a:9:{s:9:"path_type";s:8:"separate";s:8:"tab_text";s:22:"Register as individual";s:13:"fieldset_wrap";i:0;s:13:"custom_titles";i:0;s:11:"login_title";s:12:"User Account";s:14:"register_title";s:12:"User Account";s:14:"password_title";s:12:"User Account";s:20:"confirmation_display";i:0;s:20:"confirmation_message";s:0:"";}';
  $export['individual'] = $regpath;

  return $export;
}
