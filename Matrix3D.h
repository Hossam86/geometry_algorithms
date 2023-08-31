// Created by Hossam Samir on 31/08/2023
#pragma once

#include "Vector3D.h"

struct Matrix3D {
private:
    float n[3][3];
public:
    Matrix3D() = default;

    Matrix3D(float n00, float n01, float n02, float n10, float n11, float n12, float n20, float n21, float n22) {
        n[0][0] = n00;
        n[0][1] = n10;
        n[0][2] = n20;
        n[1][0] = n01;
        n[1][1] = n11;
        n[1][2] = n21;
        n[2][0] = n02;
        n[2][1] = n12;
        n[2][2] = n22;
    }

    Matrix3D(const Vector3D &a, const Vector3D &b, const Vector3D &c) {
        n[0][0] = a.x; n[0][1] = a.y; n[0][2] = a.z;
        n[1][0] = b.x; n[1][1] = b.y; n[1][2] = b.z;
        n[2][0] = c.x; n[2][1] = c.y; n[2][2] = c.z;
    }

};