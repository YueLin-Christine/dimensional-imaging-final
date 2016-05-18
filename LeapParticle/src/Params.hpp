//
//  Params.hpp
//  example
//
//  Created by  Christine on 5/4/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include <stdio.h>
#include "ofMain.h"

class Params{
public:
    void setup(float x, float y, float z); // center of the emitter
    ofPoint eCenter; //radius of emitter
    float eRad; // radius of emitter
    float velRad; //max velocity
    float lifeTime; //max life
    float rotate; //rotation amount

    float attraction;
    float reposion;
    float friction;
    float spinning;
    
};

#endif /* Params_hpp */
