﻿/* ***************************************************************************
 * XML.h -- The GUI build module, parse UI config code and build UI.
 *
 * Copyright (c) 2018-2022, Liu chao <lc-soft@live.cn> All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of LCUI nor the names of its contributors may be used
 *     to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef LIB_UI_XML_INCLUDE_XML_H
#define LIB_UI_XML_INCLUDE_XML_H

#include "ui_xml/common.h"
#include <ui.h>

LIBUI_XML_BEGIN_DECLS

/**
 * 从字符串中载入界面配置代码，解析并生成相应的图形界面(元素)
 * @param[in] str 包含界面配置代码的字符串
 * @return 正常解析会返回一个部件，出现错误则返回 NULL
 */
LIBUI_XML_PUBLIC ui_widget_t* ui_load_xml_string(const char *str, int size);

/**
 * 从文件中载入界面配置代码，解析并生成相应的图形界面(元素)
 * @param[in] filepath 文件路径
 * @return 正常解析会返回一个部件，出现错误则返回 NULL
 */
LIBUI_XML_PUBLIC ui_widget_t* ui_load_xml_file(const char *filepath);

LIBUI_XML_END_DECLS

#endif