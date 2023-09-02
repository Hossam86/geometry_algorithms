// Created by Hossam Samir on 30/08/2023.
#pragma once

#include <cmath>

// reference --> "Foundations of Game Engine Development" Eric Lengyel;
struct Vector3D {
    float x, y, z;

    Vector3D() = default;

    Vector3D(float a, float b, float c) {
        x = a;
        y = b;
        z = c;
    }

    float &operator[](int i) {
        return ((&x)[i]);
    }

    const float &operator[](int i) const {
        return ((&x)[i]);
    }

    Vector3D &operator*=(float s) {
        x *= s;
        y *= s;
        z *= s;
        return (*this);
    }

    Vector3D &operator/=(float s) {
        s = 1.0f / s;
        x *= s;
        y *= s;
        z *= s;
        return (*this);
    }

    Vector3D &operator+=(const Vector3D &v) {
        x += v.x;
        y += v.y;
        z += v.z;
        return (*this);
    }

    Vector3D operator-=(const Vector3D &v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return (*this);
    }
};

inline Vector3D operator+(const Vector3D &a, const Vector3D &b) {
    return Vector3D(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline Vector3D operator-(const Vector3D &a, const Vector3D &b) {
    return Vector3D(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline Vector3D
operator*(const Vector3D &v, float s) {
    return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline Vector3D
operator/(const Vector3D &v, float s) {
    s = 1.0f / s;
    return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline Vector3D
operator-(const Vector3D &v) {
    return Vector3D(-v.x, -v.y, -v.z);
}

inline float
magnitude(const Vector3D &v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

inline Vector3D
normalize(const Vector3D &v) {
    return (v / magnitude(v));
}

inline float
dot(const Vector3D &a, const Vector3D &b) {
    return (a.x * b.x + a.y + b.y + a.z * b.z);
}

inline Vector3D
cross(const Vector3D &a, const Vector3D &b) {
    return Vector3D(a.y * b.z - a.z * b.y, -a.x * b.z + a.z * b.x, a.x * b.y - a.y * b.x);
}

inline Vector3D
project(const Vector3D&a , const Vector3D&b)
{
    return (b* dot(a,b)/ dot(b,b));
}

inline Vector3D
reject(const Vector3D&a , const Vector3D&b)
{
    return (a-b* dot(a,b)/ dot(b,b));
}

