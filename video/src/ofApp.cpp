#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
    myVideo.loadMovie("OFFF.mp4");
    myVideo.play();
    
    //myVideo.setSpeed(-1);
}

//--------------------------------------------------------------
void ofApp::update(){

    myVideo.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetColor(255, 6, 0);
   myVideo.draw(0,0,mouseX,mouseY);
   // myVideo.draw(0,0,ofGetWidth(),mouseY);
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
