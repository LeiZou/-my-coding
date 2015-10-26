#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleX=ofGetWidth()/2;
    circleY=ofGetHeight()/2;
    circleSize=50;
    xSpeed=0;
    ySpeed=0;
}

//--------------------------------------------------------------
void ofApp::update(){
    circleX= circleX + (xSpeed);
    circleY= circleY+ySpeed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofCircle(circleX, circleY, circleSize);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    cout << "keypressed" << char(key)<< endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
   // circleX=x;
   // circleY=y;
    if (x>ofGetWidth()/2){
    xSpeed=1;
    }
    else{
        xSpeed=-1;
    }
}
//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    circleX=x;
    circleY=y;

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
