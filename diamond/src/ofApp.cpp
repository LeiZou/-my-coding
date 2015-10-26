#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(200, 0, 100);
    
   
    float  numDiamounds=10;
  float colorDifference=25;
    
    for(int i=0; i< numDiamounds; i++){
        float Kuan=100;
        float  Gao=200;
        
        float  y=ofRandomHeight()/2+ofSignedNoise(i*0.5+mouseX*0.01)*mouseY;
        
        ofSetColor(i*colorDifference);
       
        drawDiamond(i*Kuan, y, Kuan,Gao);
    }
    
//    ofSetColor(0);
//     drawDiamond(100,ofGetHeight()/2,100,200);
//    
//    ofSetColor(25);
//    drawDiamond(200,ofGetHeight()/2,100,200);
//    
//    ofSetColor(50);
//    drawDiamond(300,ofGetHeight()/2,100,200);
//    
//    ofSetColor(75);
//    drawDiamond(400,ofGetHeight()/2,100,200);
//    
//    ofSetColor(100);
//    drawDiamond(500,ofGetHeight()/2,100,200);
//    
//    ofSetColor(125);
//    drawDiamond(600,ofGetHeight()/2,100,200);
//    
//    ofSetColor(150);
//    drawDiamond(700,ofGetHeight()/2,100,200);
//    
//    ofSetColor(175);
//    drawDiamond(800,ofGetHeight()/2,100,200);
//    
//    ofSetColor(200);
//    drawDiamond(900,ofGetHeight()/2,100,200);
//    
//    ofSetColor(225);
//    drawDiamond(1000,ofGetHeight()/2,100,200);
    
    

    
//    ofSetColor(255,0,0);
//    drawDiamond(ofGetWidth()/2,ofGetHeight()/2,1000,mouseY);
//    
//   ofSetColor(255);
//  drawDiamond(ofGetWidth()/2,ofGetHeight()/2,mouseX,100);
    
  
//   ofSetColor(255,0,0);
//  drawDiamond(mouseX/2,mouseY,400,200);
//
//   ofSetColor(0,255,0);
//    drawDiamond(200,1000,mouseY,200);
//    
//    ofSetColor(0,0,255);
//    drawDiamond(200,mouseY,mouseX-2,200);
  


}

//----------------------------------------------------------
   
void ofApp::drawDiamond(float centerX,float centerY,float Kuan, float Gao){
    //float centerX=ofGetWidth()/2;
    //float centerY=ofGetHeight()/2;
    //float Kuan=100;
  //  float Gao=200;
    ofBeginShape();
    ofVertex(centerX, centerY-Gao/2);
    ofVertex(centerX+Kuan/2, centerY);
    ofVertex(centerX, centerY+Gao/2);
    ofVertex(centerX-Kuan/2, centerY);
    ofVertex(centerX, centerY-Gao/2);
    ofEndShape();
    
//     ofSetColor(0);
//    ofCircle(centerX-Kuan/2, centerY/3, 20);
//    ofCircle(centerX+Kuan/2, centerY/3, 20);
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
