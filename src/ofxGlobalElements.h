//
//  ofxGlobalElements.cpp
//  emptyExample
//
//  Created by Oriol Ferrer Mesià on 10/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#pragma once

#include <iostream>
#include <map>



class ofxGlobalElement{ // needs to be superclass of any element to be inserted in G (std::map)

	public:
		void setGlobalName(std::string name_){ globalName = name_; }
		std::string getGlobalName(){ return  globalName; }
	
	private:
		std::string globalName;
};


class G{

	public:
	
		G(){};
		static G* get();

		void setElement(ofxGlobalElement* e, std::string eID );
		ofxGlobalElement* getElement( std::string eID);
	
	private:
		
		static G* singleton;
		
		std::map<std::string, ofxGlobalElement*> elements;
};


