#include <stdio.h>

int main(int argc, char *argv[]){
	
	int n, mask, i; 
	mask = 0x80; 
	for(n = 0; n < 20; n++){
		printf("%d, 0x%02X, ", n, n);
		
				// 10����(decimal) , 16���� (hex)  
								//   ox			
								//���� 2 %2X
								//�е����� 0���� ���ֶ� %02X
		
		for(i = 0; i < 8; i++){
			if( (n & ( mask >> i))  == 0 ) {
				printf("0"); 
			}else{
				printf("1"); 
			}
			
			if(i == 3){
				printf(" "); 
			}
		}
		
		printf("\n"); 									
	}
	 
	
	/*
	n = 0x13; // 0001 0011 
	mask = 0x80; 
	
	for(i = 0; i < 8; i++){
		if( (n & ( mask >> i))  == 0 ) {
			printf("0"); 
		}else{
			printf("1"); 
		}
		
		if(i == 3){
			printf(" "); 
		}
	}
	
	printf("\n"); 
	
	//n & mask 
	
    //	n & mask >> 1 
	
    //	n & mask >> 2 
	*/
	return 0; 
}


