#include "resistor_color.h"

// returns all color values as an array
resistor_band_t* colors(void) {

	static resistor_band_t allTheColors[] = {BLACK,BROWN,RED,ORANGE,YELLOW,GREEN,BLUE,VIOLET,GREY,WHITE};

	return allTheColors;
} 

// a function that returns the encoded value given a color band color
int color_code(resistor_band_t bandcolor) {
	return (int) bandcolor;
}
