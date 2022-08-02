#include <iostream>

using namespace std; 

/* 좌표로, 양수만 사용해주세요.. */ 
class point{ // d엑세스 한정자: public, protected, privage  
	private: 
		int x, y;  // 멤버변수 --> 속성, property   
	public: 	
		void set(int a, int b){	// 함수 --> method 
			if( a < 0)  a = a* -1; 
			if(b < 0) b = b*-1;  
			x = a; 
			y = b;
		}
		
		void print(){
			cout<<"X:"<<x<<", Y:"<<y<<endl; 
		}
};

int main(int argc, char *argv[]){
	
	point mypoint;  // point --> class, mypoint --> instance 
	
	mypoint.x = -100; // property access, public 일빼만 사능  
	mypoint.y = -200; 
	mypoint.print(); // method call 	
	
	mypoint.set(-150, -250); 
	mypoint.print(); 
	
	return 0; 
}
