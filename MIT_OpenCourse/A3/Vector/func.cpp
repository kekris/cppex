#include "header.h"
void OffsetVec(Vector * v, double offsetx, double offsety){
	v->start.x += offsetx; v->start.y += offsety;
	v->end.x += offsetx; v->end.y += offsety;
	return;
}
