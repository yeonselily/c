#include <iostream>
# include <stdio.h> 
# include <stdlib.h>
using namespace std; 

int main(int argc, char *argv[]){
	
		int n = 5; 
		char c = 'a'; 
		char buf[20]; 
	
		cout<<"Hello "<<endl; 
		cout<<n<<endl; 
		cout<<c<<endl; 
	
		cout << "Hello "<<n<<", - "<<c<<endl;
		printf("Hello %d, - %c\n", n, c); 
		
		cin>>n; 
		cout<<"Value of n: "<<n<<endl; 
		
		cout<<"Your String: "; 
		cin>>buf; 
		cout<<"Your String was: "<<buf<<endl; 
		 ////////////////////////////////////////s
		 int *p; 
		 
		 p = (int*)malloc(sizeof(int)*1); 
		 *p = 10; 
		 free(p); 
		 
		 p = new int(10); // 값 초기화  
		 *p = 10; 
		 delete p; 
		 ////////////////////////////
		 p = (int *)malloc(sizeof(int) *5); 
		 free(p); 
		 
		 
		 p = new int[5]; 
		 delete[] p;
	
		return 0; 
	}
 
