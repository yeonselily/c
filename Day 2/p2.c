#include <stdio.h>

int main(int argc, char *argv[]){
	
	int n, i; 
	n = 0; 
	
	for(i = 0; i < 3; i++){
	
		printf("Your Number: "); 
		scanf("%d", &n); 
		
		if(n % 2 == 0){
			printf("%d even: %d\n", n, n*n);
			
		}else{
			printf("%d odd: %d\n",n, n - 1); 
		}
	}
	
	return 0; 
}
