#include <stdio.h>

int main(int argc, char *argv[]){
	
	int n = 7, m = 3; 
	printf("== : %d\n", n==m); // 0 false  
	printf("!= : %d\n", n!=m); // 1 true 
	printf("> : %d\n", n>m); // 1 true 
	printf("< : %d\n", n<m); // 0 false 
	
	/*
	((n > m) && (n == 10))
	n�� m���� ũ��, n�� ���� 10�̴�. (AND)
	 
	((n > m) || (n == 10))
	n�� m���� ũ�ų�, n�� ���� 10�̴�. (OR)
	*/
	
	return 0; 
}
