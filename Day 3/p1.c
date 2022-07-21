#include <stdio.h>

int main(int argc, char *argv[]){
	int n, i, flag; 
	
	for(n = 2; n < 101; n++){	
		flag = 0; 
		
		for(i = 2; i < n; i++){
			
			if(n % i ==  0){
				//printf("Not Prime.\n"); 
				flag = 1; 
				break; 
			}	 
		}
		
		if(flag == 0)		
			printf("%d, ", n); 
			// printf("Prime.\n"); 
	}
	
	return 0; 
}
