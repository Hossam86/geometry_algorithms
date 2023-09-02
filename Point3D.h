// Created by Hossam Samir on 02/09/2023.
#include "Vector3D.h"

struct Point3D {
    float x, y, z;
};

//test if point p2 is left|on|right of infinite 2D line through p0 to p1
//return:
//          > 0 for p2 left of line
//          = 0 for p2 on line
//          < 0 for p2 right of line
inline int
is_left(const Point3D &p0, const Point3D &p1, const Point3D &p2) {
    auto v1 = Vector3D(p1.x - p0.x, p1.y - p0.y, p1.z - p0.z);
    auto v2 = Vector3D(p2.x - p0.x, p2.y - p0.y, p2.z - p0.z);
    auto det = magnitude(cross(v1, v2));
    return det;
}
