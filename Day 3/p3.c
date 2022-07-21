#include <stdio.h>

int main(int arc, char *argv[]){
	int i; 
	int m[50]; 
	int sum; 
	
	for(i = 0; i < 50; i++){
		m[i] = 7 * (i+1); 
		// printf("%d\n ", m[i]);  
	}
	
	sum = 0; 
	for(i = 0; i < 50; i++){
		sum += m[i];  
	}
	
	printf("AVG: %f\n", sum / 50.0); 
	
	
	return 0; 
}
