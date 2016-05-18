//
//  Particle.hpp
//  example
//
//  Created by  Christine on 5/4/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Params.hpp"

class Particle{
public:
    //constructor
    Particle();
    
    //method
    void setup();
    void update(float dt);
    void draw();
    
    //variables
    Params param;
    ofVec3f pos;
    ofVec3f vel;
    float time; //the time it's been alive
    float lifeTime; //maxTime particle will live
    bool live;
    ofVec3f randomPointInSphere(float maxRad);
    
    
    
};

#endif /* Particle_hpp */
