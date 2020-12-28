#include "darts.h"

#define INNER_RADIUS  1
#define MIDDLE_RADIUS 5
#define OUTER_RADIUS  10

uint8_t score(coordinate_t coord) {

	float distanceFromOrigin = sqrt(coord.x*coord.x + coord.y*coord.y);

	if(distanceFromOrigin <= INNER_RADIUS) {
		return 10;
	} else if(distanceFromOrigin <= MIDDLE_RADIUS) {
		return 5;
	} else if(distanceFromOrigin <= OUTER_RADIUS) {
		return 1;
	}

	return 0;
}
