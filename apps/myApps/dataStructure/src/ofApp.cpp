#include "ofApp.h"
#include "math.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("Algorithm Complexity Comparison");
	ofSetWindowShape(1024, 768);
	ofSetFrameRate(40);
	ofBackground(ofColor::white);
	ofSetColor(ofColor::black);
	ofSetLineWidth(1.0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (float n = 0; n < ofGetWidth(); n += 0.01) {
		ofSetColor(ofColor::green);
		ofDrawCircle(n, ofGetHeight() - log(n), 1);
		
		ofSetColor(ofColor::darkGreen);
		ofDrawCircle(n, ofGetHeight() - n, 1);

		ofSetColor(ofColor::blue);
		ofDrawCircle(n, ofGetHeight() - n * log(n), 1);

		ofSetColor(ofColor::red);
		ofDrawCircle(n, ofGetHeight() - n * n, 1);

		ofSetColor(ofColor::black);
		ofDrawCircle(n, ofGetHeight() - n * n * n, 1);
	}
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
