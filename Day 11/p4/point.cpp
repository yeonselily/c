#include <iostream>
#include "point.h"

using namespace std; 

point::point(){
	cout<<"POINT CONST."<<endl; 
}

point::~point(){
	cout<<"POINT DEST."<<endl; 
}

void point::set(int a, int b){
	x = a; 
	y = b; 
} 

void point::print(){
	cout<<"POINT: "<<x<<", "<<y<<endl; 
} 	
