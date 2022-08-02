#include <iostream>

using namespace std; 

/* ��ǥ��, ����� ������ּ���.. */ 
class point{ // d������ ������: public, protected, privage  
	private: 
		int x, y;  // ������� --> �Ӽ�, property   
	public: 	
		void set(int a, int b){	// �Լ� --> method 
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
	
	mypoint.x = -100; // property access, public �ϻ��� ���  
	mypoint.y = -200; 
	mypoint.print(); // method call 	
	
	mypoint.set(-150, -250); 
	mypoint.print(); 
	
	return 0; 
}
