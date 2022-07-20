#include <stdio.h>
// for, while, do-while 반복 구문들 !  
int main(int argc, char *argv[]){
	
	int n; 
	
	
	/*
	for(n = 0; n < 5; n++){
	// n <= 4 or n < 5		
		printf("%d\n", n); 
		printf("....\n");  
	}
	*/ 
	
	/*
	n = 0; 
	while(n < 5){
		printf("%d\n", n); 
		printf("....\n");  
		n++; // 없으면 무한 반복
		   
	}
	*/
	
	/*
	n = 0; 
	while(1){
		if(n == 5)
			break; 
		printf("%d\n", n); 
		printf("....\n"); 
		n++; 	
	} 
	*/ 
	
	n = 0; 
	do{ // 무조건 한 번은 합니다, 조건이 한 번은 안 맞아도 !  
		printf("%d\n", n);
	    printf("....\n");
		n++; 
	}while(n < 5); // 반복의 체크를 뒤쪽 나중에 함.  
	
	return 0; 
}
