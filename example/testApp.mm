#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	G * globals = G::get();
	globals->setElement(new MyTestClass(), "test");
	globals->setElement(new MyTestClass2(), "test2");	
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

	MyTestClass2 * t = (MyTestClass2*) G::get()->getElement("test2");
	if (t!= NULL) t->doSomething();
}


//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

	MyTestClass * t = (MyTestClass*) G::get()->getElement("test");
	if (t!= NULL) t->saySomething();
}
