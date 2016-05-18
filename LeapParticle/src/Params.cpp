//
//  Params.cpp
//  example
//
//  Created by  Christine on 5/4/16.
//
//

#include "Params.hpp"

void Params::setup(float x, float y, float z){
    //eCenter = ofPoint(ofGetWidth()/2, ofGetHeight()/2);
    eCenter = ofPoint(x, y, z);
//    cout<<x<< " "<< y<< endl;
//    eRad = 10;
//    velRad = 80;
//    lifeTime = 3.0;
//    rotate = 90;
//    attraction = 0;
//    spinning = 0;
//    friction = 0;
//    
//    eRad = 10;
//    velRad = 0;
//    lifeTime = 2.0;
//    rotate = 0;
//    attraction = 1000;
//    spinning = 1000;
//    friction = 0.05;
    
    
    eRad = 300;
    velRad = 80;
    lifeTime = 3.0;
    rotate = 90;
    attraction = -100;
    spinning = 1000;
    friction = 0.05;
}