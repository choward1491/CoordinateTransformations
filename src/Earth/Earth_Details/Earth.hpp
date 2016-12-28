//
//  Earth.hpp
//  MissileSim
//
//  Created by Christian J Howard on 4/23/16.
//  Copyright © 2016 Christian Howard. All rights reserved.
//

#ifndef Earth_hpp
#define Earth_hpp

#include <stdio.h>
#include "vec3.hpp"

namespace Earth {
    typedef vec<3,double> vec3;
    
    // normal info
    constexpr double mass = 5.9723e24;          // in kg
    constexpr double omega_mag= 7.2921159e-5;   // in rads/s
    const vec3 omega(0, 0, -omega_mag);
    
    // orbital mechanics data
    constexpr double e = 0.081819190842613;
    constexpr double e2 = 6.69437999014e-3;
    constexpr double a = 6378137;
    constexpr double f = 1.0/298.257223563;
    constexpr double b = a*(1.0-f);
    const     double ep = sqrt( (a*a - b*b)/(b*b) );
    const     double ep2 = ep*ep;
    constexpr double re = 6371008.8;
    constexpr double Ge = 9.7803253359;
    constexpr double k = 0.00193185265241;
    
    
    // energy data
    
}

#endif /* Earth_hpp */
