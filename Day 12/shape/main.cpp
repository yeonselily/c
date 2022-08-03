#include <iostream>
#include <string>
#include "shape2d.h"

using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	
	shape2d myshape("shape1"); 
	myshape.print(); 
	
	/*
	string s1("hello"), s2, s3("world"); 

	cout<<s1.size()<<endl; // strlen 
	cout<<s1.find('e', 0)<<endl;  //strchr, 반환값은 인덱스.  
	cout<<s1.find("lo", 1)<<endl;  //strstr, 반환값은 인덱스.  
	cout<<s1.substr(1,3)<<endl; // strncpy 
	cout<<s1.compare("hello")<<endl; // strcmp 
	 
	s2 = s1; 
	cout<<s2<<endl; 
	 
	s2 = s1+ s3;  
	cout<<s2<<endl; 
	*/ 
	 
	return 0;
}
