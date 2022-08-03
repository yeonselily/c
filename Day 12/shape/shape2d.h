#ifndef __SHAPE2D_H__
#define __SHAPE2D_H__

#include <string>

using namespace std; 

class shape2d{
	
	private: 
		//char descrString[30]; 
		string descrString; 
		
	public: 
		shape2d(char *s); 
		void print(); 	
		
};

#endif
