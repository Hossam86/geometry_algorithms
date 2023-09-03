// Created by Hossam Samir on 02/09/2023.
#include "Vector3D.h"

struct Point3D {
    float x, y, z;
};

// Test if point p2 is left|on|right of infinite 2D line through p0 to p1
// Output    > 0 for p2 left of line
//          = 0 for p2 on line
//          < 0 for p2 right of line
// Reference: Practical Geometry Algorithms
inline int
is_left(const Point3D &p0, const Point3D &p1, const Point3D &p2) {
    auto v1 = Vector3D(p1.x - p0.x, p1.y - p0.y, p1.z - p0.z);
    auto v2 = Vector3D(p2.x - p0.x, p2.y - p0.y, p2.z - p0.z);
    auto det = magnitude(cross(v1, v2));
    return det;
}

// Test the orientation of 2D triangle with given three points v0,v1,v2
// Output   > 0 counterclockwise
//          = 0 for degenerate
//          < 0 for clockwise
// Reference: Practical Geometry Algorithms
inline int orientation2D_triangle(const Point3D &p0, const Point3D &p1, const Point3D &p2) {
    return is_left(p0, p1, p2);
}

// Calculate the area of 2D triangle with given three points v0,v1,v2
// Output   (float) area of the given triangle
// Reference: Practical Geometry Algorithms
inline float area2D_triangle(const Point3D &p0, const Point3D &p1, const Point3D &p2) {
    return (is_left(p0, p1, p2) / 2.0f);
}