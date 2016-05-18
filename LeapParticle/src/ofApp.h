#pragma once

#include "ofMain.h"
#include "Params.hpp"
#include "Particle.hpp"
#include "LeapMotion.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
//    void exit();
	
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    LeapMotion leap;
    
    vector<Particle> p;
    
    Particle newp1;
    Particle newp2;
    Particle newp3;
    Particle newp4;
    Particle newp5;
    
    float bornCount;
    float bornRate;
    float time;
    float time0; //runs immediately
    float dt;
    float size;
    
    ofEasyCam camera;
    ofLight light;
    
    ofSoundPlayer sound;
    
};
