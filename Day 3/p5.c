#include <stdio.h>

int main(int argc, char *argv[]){		
	char c, d;
	
	/* 	
	1 byte = 8 bit  
	*/  
	c = 1; // 0000 0001 
	c = 2; // 0000 0010 
	c = 3; // 0000 0011  
	c = 4; // 0000 0100 
	c = 7; // 0000 0111
	
	printf("%d\n", c); 
	
	c = 1; 
	printf("%d\n",c); 
	printf("%d\n", c<<2); //2칸  왼쪽으로 밀어서 4  
	
	c = 4; 
	printf("%d\n", c); 
	printf("%d\n", c>>c); // 2칸 오른쪽으로 밀어서 1  
	
	/*
	1001 0010 
	
	<<2 ==> 0100 1000 
	*/
	
	c = 1; // 0000 0001 
	d = 2; // 0000 0010 
	
	printf("%d\n", c & d); // 0        0000 0000  
	printf("%d\n", c | d); // 3 합치기 0000 0011  
	
	return 0; 
} 
