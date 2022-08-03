#include "shape2d.h"
#include <iostream>
//#include <string.h>

using namespace std; 

shape2d::shape2d(char *s){
	// strcpy(descrString, s); 
	descrString = string(s); 	
}

void shape2d::print(){
	cout<<"SHAPE2d: "<<descrString<<endl; 
}
