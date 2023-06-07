#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <css/selector.h>
#include <ui/style.h>

#define LOG_BUFFER_SIZE 1024
#define WIDGET_STR_SIZE 256

int ui_logger_log(logger_level_e level, ui_widget_t *w, const char *fmt, ...)
{
	va_list args;
	css_selector_node_t *node;
	char buffer[LOG_BUFFER_SIZE];

	va_start(args, fmt);
	vsnprintf(buffer, LOG_BUFFER_SIZE, fmt, args);
	va_end(args);
	if (w) {
		node = ui_widget_create_selector_node(w);
		strreplace(buffer, LOG_BUFFER_SIZE, "${widget}", node->fullname);
		css_selector_node_destroy(node);
	} else {
		strreplace(buffer, LOG_BUFFER_SIZE, "${widget}", "(null)");
	}
	return logger_log(level, buffer);
}