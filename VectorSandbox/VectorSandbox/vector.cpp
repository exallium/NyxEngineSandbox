#include"vector.h"

/* Vector2 */
void AddVector2(const vector2 &a, const vector2 &b, vector2 &result) {
	result.x = a.x + b.x; 
	result.y = a.y + b.y;
}

/* Vector 3 */
void AddVector3(const vector3 &a, const vector3 &b, vector3 &result) {
	result.x = a.x + b.x; 
	result.y = a.y + b.y;
	result.z = a.z + b.z;
}

/* Vector 4 */
void AddVector4(const vector4 &a, const vector4 &b, vector4 &result) {
	result.x = a.x + b.x; 
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	result.w = a.w + b.w;
}