#pragma once

#include "ofMain.h"
#include "ofxGlobalElements.h"


class MyTestClass : public ofxGlobalElement{
	public:
		void saySomething(){ system("say monkey"); }
};


class MyTestClass2 : public ofxGlobalElement{
	public:
		void doSomething(){ printf("something\n"); }
};


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void mousePressed(int x, int y, int button);
		
};
