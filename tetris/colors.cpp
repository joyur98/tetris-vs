#include "colors.h"
#include <vector>

//the rgba values of the colors
extern Color darkGrey = { 26, 31, 40, 255 };
extern Color green = { 47, 230, 23, 255 };
extern Color orange = { 226, 116, 17, 255 };
extern Color red = { 232, 18, 18, 255 };
extern Color yellow = { 237, 234, 4, 255 };
extern Color purple = { 166, 0, 247, 255 };
extern Color cyan = { 21, 204, 209, 255 };
extern Color blue = { 13, 64, 216, 255 };


//now returning the vector of colors
std::vector<Color> GetCellColors() {
	return {
		darkGrey,
		green,
		orange,
		red,
		yellow,
		purple,
		cyan,
		blue
	};
}