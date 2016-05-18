#include "ofApp.h"

//--------------------------------------------------------------


void ofApp::setup(){
    ofEnableDepthTest();
    
    sound.loadSound("ObfuscAmateurCartography.mp3"); //Music is Obfusc's Amateur Cartography from Game Monument Valley
    sound.setLoop( true );
    sound.play();

//    ofSetBackgroundAuto(false);
//    ofBackground(255,0,0);
    time0 = ofGetElapsedTimef();
    
    bornCount = 0.9;
    bornRate = 200;
    
    leap.setup();
}


//--------------------------------------------------------------
void ofApp::update(){
//    light.enable();
//    light.setPosition(newp1.pos + ofPoint(0, 0, 1600));
    
    leap.update();
    
    time = ofGetElapsedTimef()*2;
    dt = ofClamp(time - time0, 0, 0.1);
    time0 = time;
    
    for(int i = 0; i<p.size(); i++){
        if(!p[i].live){
            p.erase(p.begin() + i);
        }
    }
    
    bornCount += dt *bornRate;
    if(bornCount>1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i= 0; i<bornN; i++){
            newp1.param.setup(leap.tipGlobal1.x, leap.tipGlobal1.y, leap.tipGlobal1.z);
            newp1.setup();
            p.push_back(newp1);
            
            newp2.param.setup(leap.tipGlobal2.x, leap.tipGlobal2.y, leap.tipGlobal2.z);
            newp2.setup();
            p.push_back(newp2);
            
            newp3.param.setup(leap.tipGlobal3.x, leap.tipGlobal3.y, leap.tipGlobal3.z);
            newp3.setup();
            p.push_back(newp3);
//            
//            newp4.param.setup(leap.tipGlobal1.x, leap.tipGlobal1.y, leap.tipGlobal1.z);
//            newp4.setup();
//            p.push_back(newp);
//            
//            newp5.param.setup(leap.tipGlobal1.x, leap.tipGlobal1.y, leap.tipGlobal1.z);
//            newp5.setup();
//            p.push_back(newp);
            
        }
    }
    for(int i = 0; i < p.size(); i++){
        p[i].update(dt);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(0);
    
    camera.begin();
    ofPushMatrix();
    ofTranslate(0, 0, 0);

    leap.draw();
    
    for(int i = 0; i< p.size(); i++){
        p[i].draw();
        
    }
//    
    ofPopMatrix();
    camera.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

//--------------------------------------------------------------
//void ofApp::exit(){
//    // let's close down Leap and kill the controller
//    leap.exit();
//}
