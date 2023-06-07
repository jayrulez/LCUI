#ifndef LIB_UI_CURSOR_INCLUDE_UI_CURSOR_H
#define LIB_UI_CURSOR_INCLUDE_UI_CURSOR_H

#include "ui_cursor/common.h"
#include <pandagl.h>
#include <platform.h>
#include <ui.h>

LIBUI_CURSOR_BEGIN_DECLS

LIBUI_CURSOR_PUBLIC void ui_cursor_refresh(void);
LIBUI_CURSOR_PUBLIC bool ui_cursor_is_visible(void);
LIBUI_CURSOR_PUBLIC void ui_cursor_show(void);
LIBUI_CURSOR_PUBLIC void ui_cursor_hide(void);
LIBUI_CURSOR_PUBLIC void ui_cursor_set_position(int x, int y);
LIBUI_CURSOR_PUBLIC int ui_cursor_set_image(pd_canvas_t *image);
LIBUI_CURSOR_PUBLIC void ui_cursor_get_position(int *x, int *y);
LIBUI_CURSOR_PUBLIC int ui_cursor_paint(app_window_t *w, app_window_paint_t* paint);
LIBUI_CURSOR_PUBLIC void ui_cursor_init(void);
LIBUI_CURSOR_PUBLIC void ui_cursor_destroy(void);

LIBUI_CURSOR_END_DECLS

#endif