#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofBackground(45, 23, 100);
    
    //ofNoFill();
    ofSetColor(0,255,0);
    ofCircle(220, 200, 200);
     ofFill();
    ofCircle(mouseX, mouseY, 100);
    //ofSetHexColor(0XDDEFF);
    ofSetColor(0,200,23,200);
    ofCircle(900, 500, 100);
    ofSetColor(0,0,255,50);
    ofLine(mouseX, mouseY, 900, 500);
    ofSetColor(255,0,0,200);
    ofRect(257, 300, 512, 154);
    ofSetColor(100,128,60,45);
    ofTriangle(600, 300, 950, 600, 400, 600);
    
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
