// Created by Hossam Samir on 02/09/2023.
#pragma once

#include "Vector3D.h"

struct Matrix4D {
private:
    float n[4][4];

public:
    Matrix4D() = default;

    Matrix4D(const Vector3D &a, const Vector3D &b, const Vector3D &c, const Vector3D &d) {
        // column 0
        n[0][0] = a.x;
        n[0][1] = a.y;
        n[0][2] = a.z;

        // column 1
        n[1][0] = b.x;
        n[1][1] = b.y;
        n[1][2] = b.z;

        // column 2
        n[2][0] = c.x;
        n[2][1] = c.y;
        n[2][2] = c.z;

        // column 3
        n[3][0] = d.x;
        n[3][1] = d.y;
        n[3][2] = d.z;
    }

};