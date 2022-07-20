#include <stdio.h>

int main(int argc, char *argv[]){
	
	int x, y; 
	x = 15; 
	y = 100; 
	
	float z = 10.5; 
	
	x = x * x; // x *= x; 
	x = x + 7; // x += 7; 
	
	
	//¹®ÀÚ¿­ format string "%d\n" 
	printf("value of x: %d, %d, %f\n", x, y, z); //232, 100, 10.500000
	
	return 0; 
}
