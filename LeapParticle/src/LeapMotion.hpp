//
//  LeapMotion.hpp
//  example
//
//  Created by  Christine on 5/4/16.
//
//

#ifndef LeapMotion_hpp
#define LeapMotion_hpp

#include <stdio.h>
#include "ofMain.h"
#include "ofxLeapMotion2.h"

class LeapMotion{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void exit();
    
    ofxLeapMotion leap;
    vector <ofxLeapMotionSimpleHand> simpleHands;
    
    ofPoint tipGlobal1;
    ofPoint tipGlobal2;
    ofPoint tipGlobal3;
    ofPoint tipGlobal4;
    ofPoint tipGlobal5;
    
    vector <int> fingersFound;
    ofEasyCam cam;
};

#endif /* LeapMotion_hpp */
