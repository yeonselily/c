#include <stdio.h>

int main(int argc, char *argv[]){
	
	int n = 7, m = 3;
	
	int x = 6; 
	// 0 false 
	// 0 아닌 값들 true including 1,2,3,4 ..
	 
	if(n > 5){
		printf("n greater than 5. \n"); 
	}else if (n > m){
		printf("n greater than m.\n"); 
	}else if( n % 2 == 1){
		printf("n is odd number\n"); 
	}else{
		printf("n not greater than 5.\n"); 
	}

	/*
	if(n > m){
		printf("n greater than m.\n"); 
	}
	*/
	
	if(x == 5){
		
		printf("hello\n"); 
		printf("world\n"); 
	
	}else{
	
		printf("byebye\n"); 
		printf("world\n"); 
	
	}

	/*
	if( x != 5){
		printf("byebye\n"); 
		printf("world\n"); 
	}	
	*/	
		
	return 0;  
}
