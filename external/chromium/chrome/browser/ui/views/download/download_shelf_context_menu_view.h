// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_DOWNLOAD_DOWNLOAD_SHELF_CONTEXT_MENU_VIEW_H_
#define CHROME_BROWSER_UI_VIEWS_DOWNLOAD_DOWNLOAD_SHELF_CONTEXT_MENU_VIEW_H_

#include "base/basictypes.h"
#include "base/compiler_specific.h"
#include "base/memory/scoped_ptr.h"
#include "chrome/browser/download/download_shelf_context_menu.h"

class DownloadItemModel;

namespace content {
class PageNavigator;
}

namespace gfx {
class Rect;
}

namespace views {
class MenuRunner;
class Widget;
}

class DownloadShelfContextMenuView : public DownloadShelfContextMenu {
 public:
  DownloadShelfContextMenuView(DownloadItemModel* model,
                               content::PageNavigator* navigator);
  virtual ~DownloadShelfContextMenuView();

  // |rect| is the bounding area for positioning the menu in screen coordinates.
  // The menu will be positioned above or below but not overlapping |rect|.
  void Run(views::Widget* parent_widget, const gfx::Rect& rect);

 private:
  scoped_ptr<views::MenuRunner> menu_runner_;

  DISALLOW_COPY_AND_ASSIGN(DownloadShelfContextMenuView);
};

#endif  // CHROME_BROWSER_UI_VIEWS_DOWNLOAD_DOWNLOAD_SHELF_CONTEXT_MENU_VIEW_H_
