/**
* Copyright (c) 2016-present, Facebook, Inc.
* All rights reserved.
*
* This source code is licensed under the license found in the
* LICENSE_camera_ctl_ui file in the root directory of this subproject.
*/

#include "PreviewButton.hpp"
#include "CameraController.hpp"
#include "Config.hpp"
#include <iostream>
#include <pthread.h>

using namespace surround360;
using namespace Gtk;
using namespace std;

PreviewButton::PreviewButton()
  : Gtk::Button(),
    m_previewing(false) {
  set_label("Start Preview");
}

bool PreviewButton::isPreviewing() {
  return m_previewing;
}

void PreviewButton::setPreviewing(bool isPreviewing) {
  m_previewing = isPreviewing;
}
