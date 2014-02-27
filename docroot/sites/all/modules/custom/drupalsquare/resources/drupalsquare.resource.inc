<?php

function _drupalsquare_resource_access() {
  return TRUE;
}

function _drupalsquare_resource_retrieve($uid) {
  $account = user_load($uid);

  if (isset($account->data['checked_in'])) {
    return array(
      'uid' => $account->uid,
      'name' => $account->name,
      'last_checkin' => $account->data['checked_in'],
    );
  }
  else {
    return FALSE;
  }
}

function _drupalsquare_resource_checkin($uid, $date = NULL) {
  $account = user_load($uid);
  $account->data['checked_in'] = is_null($date) ? REQUEST_TIME : $date;
  user_save($account);
  return TRUE;
}