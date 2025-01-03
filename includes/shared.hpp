#ifndef UTILITY_H
#define UTILITY_H

#include "point.hpp"
#include <cmath>
#include <set>

inline double GetMatrixComputationValue(double a, double b, double c, double d){
    return a * d - b * c;
}

inline static double GetDistance(Point first, Point second){
    double dx = (first.GetX() - second.GetX());
    double dy = (first.GetY() - second.GetY());
    return std::sqrt(dx * dx + dy * dy);
}

template<class T>
inline static bool Between(T val, T min, T max){
    if(min <= val && val <= max){
        return true;
    }
    return false;
}

#endif