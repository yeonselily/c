#include <stdio.h>
/*
n = 7 
7 % 2..
7 % 3..
7 % 4..
7 % 5..
7 % 6..

1. n을 2에서부터 n -1 의 값(6)까지 % 로 나눠본다. 
2. 모듈로 값이 전부 0 이 아니면, n은 소수. 
3. 한번이라도 모듈로 값이 0이면, 소수 아님. 

*/
int main(int argc, char *argv[]){
	
	int n, i; 
	n = 7; 
	
	for(i = 2; i < n; i++){
		//printf("%d\n", i);
		n % i; 
		 
	}	
	
	
	return 0; 
}
