//
//  ofxGlobalElements.cpp
//  emptyExample
//
//  Created by Oriol Ferrer Mesià on 10/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "ofxGlobalElements.h"

G* G::singleton = NULL; //init the singleton here

G* G::get(){	
	if (!singleton){   // Only allow one instance of class to be generated.
		singleton = new G();
	}
	return singleton;
}

void G::setElement(ofxGlobalElement* e, std::string eID ){	
	e->setGlobalName( eID );
	elements[eID] = e;	
}

ofxGlobalElement* G::getElement( std::string eID ){
	
	std::map<std::string,ofxGlobalElement*>::iterator it;
	
	it = elements.find(eID);
	
	if ( it == elements.end() ){	//not found!		
		printf("ofxGlobalElements::getElement('%s') >> NOT FOUND!!\n", eID.c_str());
		return NULL;
	}else{
		return elements[eID];
	}
}
