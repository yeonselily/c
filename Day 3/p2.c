#include <stdio.h>

int main(int argc, char *argv[]){
	int i = 5; 
	int n[10]; // 10 --> count, ����  
	int m[5] =  {1, 2, 3, 4, 5};
	int x[] = {10, 20, 30, 40}; 
	/*
	n[0] --> index, 0���� ����  
	n[1]
	n[2]
	n[3]
	n[4]
	n[5]
	n[6]
	n[7]
	n[8]
	n[9] --> �ִ� index �� : count - 1  
	*/ 
	
	for(i = 0; i < 10; i++){ 	// ��ȯ  
		printf("%d\n", n[i]); 
	}
	
	printf("..........................................\n");
	
	for(i = 0; i < 5; i++){
		printf("%d\n", m[i]*2);
	}
	
	for(i = 0; i < 5; i++){
		m[i] = 15 * i; 
	}
	
	for(i = 0; i < 5; i++){
		printf("%d\n", m[i]);
	}
	
	return 0; 
}
