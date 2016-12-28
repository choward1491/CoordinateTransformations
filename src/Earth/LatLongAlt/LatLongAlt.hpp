//
//  LatLong.hpp
//  MissileSim
//
//  Created by Christian J Howard on 11/25/15.
//  Copyright © 2015 Christian Howard. All rights reserved.
//

#ifndef LatLong_hpp
#define LatLong_hpp

class LatLongAlt {
public:
    LatLongAlt():latitude(0),longitude(0),altitude(0){}
    LatLongAlt( double latInDegrees, double longInDegrees, double altInMeters );
    
    double getLatitudeInDegrees() const;
    double getLatitudeInRadians() const;
    double getLongitudeInDegrees() const;
    double getLongitudeInRadians() const;
    double getAltitudeInMeters() const { return altitude; }
    
    void setLatitudeInDegrees( double latDegrees );
    void setLatitudeInRadians( double latRadians );
    void setLongitudeInDegrees( double longDegrees );
    void setLongitudeInRadians( double longDegrees );
    void setAltitudeInMeters( double alt ){ altitude = alt; }

    void print() const;
    
private:
    double latitude;    // in radians
    double longitude;   // in radians
    double altitude;    // in meters
    
};

typedef LatLongAlt LLA;

#endif /* LatLong_hpp */
