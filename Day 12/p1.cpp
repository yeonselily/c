#include <iostream>

using namespace std; 

class color{
	private: 
		int r, g, b;  	
	
	public:
		void set(int x, int y, int z){
			r = x; 
			g = y; 
			b = z; 
				
		} 
		
		void print(){ 
			cout<<"COLOR: "<<r<<", "<<g<<", "<<b<<endl; 
		}
			
};  


int main(int argc, char *argv[]){
	
	color mycolor1; 
	
	/*
	�̷��� ���� ���ϵ��� encapsulation ���  
	mycolor1.r = 255; 
	mycolor1.g = 128;
	mycolor1.b = 100; 
	*/ 
	
	mycolor1.set(128, 255, 128); 
	mycolor1.print(); 
	
	
	return 0; 
}

