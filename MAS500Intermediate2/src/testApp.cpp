#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofRegisterTouchEvents((ofxAndroidApp*)this);
	filled = false;
	xparam = 15;
	yparam = 15;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackgroundGradient(ofColor::white, ofColor::gray);
	if(filled){
		ofSetColor(0);
	}
	else{
		ofSetColor(255);
	}

	ofCircle(xparam, yparam, 50);
	ofCircle(xparam-100, yparam-100, 50);
	ofCircle(xparam+100, yparam+100, 50);
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

void testApp::touchDown(int x, int y, int id){
	ofLogNotice() << "touch down " << x << "," << y << ":" << id;


}

void testApp::touchMoved(int x, int y, int id){
	xparam = x;
	yparam = y;
	ofLogNotice() << "touch moved " << x << "," << y << ":" << id;
}

void testApp::touchUp(int x, int y, int id){
	ofLogNotice() << "touch up " << x << "," << y << ":" << id;

}

void testApp::touchDoubleTap(int x, int y, int id){
	if(filled)
		filled = false;
	else filled = true;
	ofLogNotice() << "touch double " << x << "," << y << ":" << id;

}

void testApp::touchCancelled(int x, int y, int id){
	ofLogNotice() << "touch cacelled " << x << "," << y << ":" << id;

}

void testApp::swipe(ofxAndroidSwipeDir swipeDir, int id){
	ofLogNotice() << "swipes " << swipeDir << id;
}
