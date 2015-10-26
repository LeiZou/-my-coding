#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySound.loadSound("lei.wav");
    mySound.play();
    mySound.setLoop(true);
    mySound.setSpeed(0);
    //设置音乐从那个时间播放
    mySound.setPosition(0.1);
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
 //if
    if (key == 'p'){
        mySound.play();
        
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    float speed;
    speed= ofMap(x, 0, ofGetWidth(), 0.0, 100.0);
    mySound.setSpeed(speed);


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
