//
//  Particle.cpp
//  example
//
//  Created by  Christine on 5/4/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    live = false;
    
}

ofPoint Particle::randomPointInSphere(float maxRad){
    ofVec3f pnt;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, TWO_PI);
    pnt.x = cos(angle)*rad;
    pnt.y = sin(angle)*rad;
//    pnt.z = 0;
    return pnt;
    
}

void Particle::setup(){
    
    pos = param.eCenter + randomPointInSphere(param.eRad);
    vel = randomPointInSphere(param.velRad);

    time = 0;
    lifeTime = param.lifeTime;
    live = true;
}

void Particle::update(float dt){ //dt stands of timestamp?
    if(live){
        //rotate velocity
        vel.rotate(0 , param.rotate * dt, param.rotate * dt);
        
        ofPoint acc;         //Acceleration
        ofPoint delta = pos - param.eCenter;
        float len = delta.length();
        if ( ofInRange( len, 0, param.eRad ) ) {
            delta.normalize();
            //Attraction/repulsion force
            acc += delta * param.attraction;
            //Spinning force
            acc.x += -delta.y * param.spinning;
            acc.y += delta.x * param.spinning;
        }
        vel += acc * dt;            //Euler method
        vel *= ( 1 - param.friction );  //Friction
        
        //update position
        pos += vel * dt;
        
        //update time + check if the particle is going to die based on lifeTime
        time += dt;
        
        if(time>=lifeTime){
            live = false;
        }
    }
}

void Particle::draw(){
    if(live){
        float size = ofMap(time, 0, lifeTime, 8, 0);
        
        ofColor color = ofColor::blue;
        float hue = ofMap(time, 0, lifeTime, 120, 220);
        color.setHue(hue);

        ofSetColor(color);
        ofDrawSphere(pos.x, pos.y, pos.z, size);
        
//        ofDrawLine(pos.x, pos.y, pos.x, pos.y);
//        ofDrawLine(pos.x, pos.y, pos.x, pos.y);
//        ofDrawLine(pos.x, pos.y, pos.x, pos.y);
    }
}
