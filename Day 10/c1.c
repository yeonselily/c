#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// *반환값 데이터 타입''  '[함수명]'  ([매개변수1 데이터 타입]) [매개변수 1 변수명]
// void 반환값 없음 
// void * 조값 반환, 해당주소에 저장된 데이터 타입은 미정.
// int * 조값 반환, 해당주소에 저장된 데이터 타입은 int 타입.  
// char *주소값 반환, 해당주소에 저장된 데이터 타입은 char type  미정.

void fn1(int n); // 값을 복사하여 가지고 옴.  
				// pass by value  
void fn1(int *n); // 주소값을 복사하여 가지고 옴.  
				// pass by reference  (pointer형 변수) 
				 

int main(int argc, char *argv){
	
	int n = 5; // 4 byte 
	int *np;  // 8 byte, np+0, np+1, ... 4 byte씩 증가  
	
	char c = 'a'; // 1 byte  
	char *cp; 	// 8 byte, cp + 0, cp+, ... 1 byte씩 증가  
	
	np = &n; 
	printf("%d, 0x%X\n", n, &n); // 5, addr  
	printf("0x%x, %d\n", np, *np); // addr, 5 
	////////////////////////////////////////////////////////
	
	int m[5] = {1,2,3,4,5}; 
	int i;  
	
	for(i = 0; i < 5; i++){
		// printf("0x%x\n", &(m[i])); 
		printf("0x%x\n", m+i); 
	}
	////////////////////////////////////////////////////////
	
	char *s1 = "mystring"; // code section - read only (no modification)  
	char buf[20]; 			// stack  
	char *buf2 = NULL;     // heap 
	
	int x; 
	strcpy(buf, s1); 
	buf2 = (char*)malloc(sizeof(char)*20); // 20. 
	strcpy(buf2, s1); 
	
	x = strlen(s1); 
	printf("code\tstack\theap\n"); 
		for(i = 0; i < x; i++){
			printf("0x%x\t0x%x\t0x%x\t%c\n", s1 + i, buf + i, buf2 + i, *(s1 + i)); 
		}
	
	return 0; 
	
}
