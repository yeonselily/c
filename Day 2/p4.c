#include <stdio.h>

int main(int argc, char *argv[]){
	
	int m = 0; 
	printf("Your number: "); 
	scanf("%d", &m); 
	
	if(m % 7 == 0){
		printf("m은 7의 배수 입니다."); 
		
	}else{
		printf("m은 7의 배수가 아닙니다."); 
	} 


	switch(m % 7){
		case 0:
			printf("m is multiples of 7.\n");
			break;  
		default: 
			printf("m is not multiples of 7.\n");
			break; 	
		
	}	
	
	
	return 0; 
}
