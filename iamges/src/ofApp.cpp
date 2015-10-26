#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage("1.jpg");
    myImage2.loadImage("2.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //ofSetColor(255, 0, 0);
    //让图像最大化
    myImage.draw(0,0);
    
    //ofSetColor(0,0,255,127);
    
    //用鼠标移动图像
    myImage2.draw(mouseX,mouseY);
    
    //用鼠标移动图形的大小
    // myImage.draw(0,0,mouseX,mouseY);
    
    //全屏
     //myImage.draw(0,0,ofGetWidth(),ofGetHeight());
    
    
    
    


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
