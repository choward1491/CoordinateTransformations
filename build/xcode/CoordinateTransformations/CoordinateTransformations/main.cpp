//
//  main.cpp
//  CoordinateTransformations
//
//  Created by Christian J Howard on 12/28/16.
//  Copyright © 2016 Christian Howard. All rights reserved.
//

#include <stdio.h>
#include "LatLongAlt.hpp"


int main(int argc, const char * argv[]) {
    
    LatLongAlt lla;
    lla.setAltitudeInMeters(15);
    lla.setLatitudeInDegrees(32);
    lla.setLongitudeInDegrees(110);
    
    return 0;
}
