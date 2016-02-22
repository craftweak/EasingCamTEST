#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0);
    
    mCam.setup();
    mCam.setCamSpeed(0.1); // set camera speed (0 - 1)
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    mCam.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    
    
    ofSetColor(255);
    ofFill();
    const int size = 5;
    const int exp = 75;
    for (int i = -size; i < size; i++) {
        for (int j = -size; j < size; j++) {
            for (int k = -size; k < size; k++) {
                ofRect(i * exp, j * exp, k * exp, 2, 2);
            }
        }
    }
    
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key ==' ') {
        mCam.setRandomPos();
    }
    
    if (key == '1') {
        Cam1 =! Cam1;
    }
    
    if (key == '2') {
        Cam2 =! Cam2;
    }
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
