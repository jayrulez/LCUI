#include "../../include/css/computed.h"
#include "../../include/css/properties.h"

int css_cascade_vertical_align(const css_style_array_value_t input,
			       css_computed_style_t* computed)
{
	css_vertical_align_t value;

	switch (input[0].keyword_value) {
	case CSS_KEYWORD_MIDDLE:
		value = CSS_VERTICAL_ALIGN_MIDDLE;
		break;
	case CSS_KEYWORD_BOTTOM:
		value = CSS_VERTICAL_ALIGN_BOTTOM;
		break;
	case CSS_KEYWORD_TOP:
	default:
		value = CSS_VERTICAL_ALIGN_TOP;
		break;
	}
	computed->type_bits.vertical_align = value;
	return 0;
}
