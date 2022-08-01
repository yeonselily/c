#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// *��ȯ�� ������ Ÿ��''  '[�Լ���]'  ([�Ű�����1 ������ Ÿ��]) [�Ű����� 1 ������]
// void ��ȯ�� ���� 
// void * ���� ��ȯ, �ش��ּҿ� ����� ������ Ÿ���� ����.
// int * ���� ��ȯ, �ش��ּҿ� ����� ������ Ÿ���� int Ÿ��.  
// char *�ּҰ� ��ȯ, �ش��ּҿ� ����� ������ Ÿ���� char type  ����.

void fn1(int n); // ���� �����Ͽ� ������ ��.  
				// pass by value  
void fn1(int *n); // �ּҰ��� �����Ͽ� ������ ��.  
				// pass by reference  (pointer�� ����) 
				 

int main(int argc, char *argv){
	
	int n = 5; // 4 byte 
	int *np;  // 8 byte, np+0, np+1, ... 4 byte�� ����  
	
	char c = 'a'; // 1 byte  
	char *cp; 	// 8 byte, cp + 0, cp+, ... 1 byte�� ����  
	
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
