//
//  LatLong.cpp
//  MissileSim
//
//  Created by Christian J Howard on 11/25/15.
//  Copyright © 2015 Christian Howard. All rights reserved.
//

#include "LatLongAlt.hpp"
#include <stdio.h>

namespace latlong_const {
    constexpr double pi = 3.14159265358979323846264338;
    constexpr double rad2deg = 180.0/pi;
    constexpr double deg2rad = pi/180.0;
}

LatLongAlt::LatLongAlt( double latInDegrees, double longInDegrees, double alt ){
    setLatitudeInDegrees(latInDegrees);
    setLongitudeInDegrees(longInDegrees);
    altitude = alt;
}

double LatLongAlt::getLatitudeInDegrees() const{
    return latitude*latlong_const::rad2deg;
}
double LatLongAlt::getLatitudeInRadians() const{
    return latitude;
}
double LatLongAlt::getLongitudeInDegrees() const{
    return longitude*latlong_const::rad2deg;
}
double LatLongAlt::getLongitudeInRadians() const{
    return longitude;
}

void LatLongAlt::setLatitudeInDegrees( double latDegrees ){
    latitude = latDegrees*latlong_const::deg2rad;
}
void LatLongAlt::setLatitudeInRadians( double latRadians ){
    latitude = latRadians;
}
void LatLongAlt::setLongitudeInDegrees( double longDegrees ){
    longitude = longDegrees*latlong_const::deg2rad;
}
void LatLongAlt::setLongitudeInRadians( double longDegrees ){
    longitude = longDegrees;
}

void LatLongAlt::print() const{
    printf("(Lat,Long,Alt) = (%0.10lf,%0.10lf,%0.10lf)\n",latitude,longitude,altitude);
}
