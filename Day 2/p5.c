#include <stdio.h>
// for, while, do-while �ݺ� ������ !  
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
		n++; // ������ ���� �ݺ�
		   
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
	do{ // ������ �� ���� �մϴ�, ������ �� ���� �� �¾Ƶ� !  
		printf("%d\n", n);
	    printf("....\n");
		n++; 
	}while(n < 5); // �ݺ��� üũ�� ���� ���߿� ��.  
	
	return 0; 
}
