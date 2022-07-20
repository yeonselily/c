#include <stdio.h>

int main(int argc, char *argv[]){
	
	//정수형 변수  
	// int n = 7, m = 3; 
	int n = 7; 
	int m = 3; 
	
	printf("+: %d\n", n + m);
	printf("-: %d\n", n - m);
	printf("*: %d\n", n * m);
	printf("/: %d\n", n / m);
	printf("%%: %d\n", n % m);	

	/*
	n % 2 --> 2의 배수인지 테스트 
	      = 0, 2의 배수 
		  = 0, 2의 배수 아님.  
		  
	n % 1000 --> n이 큰 숫자일때, 하위 백단위까지만 컷.  
    			ex) n = 1983674 
    			    n % 1000 = 674
	*/ 
	
	//산술 연산자 
	n = 5; 
	
	n = n + 1; // 6
	n++;
	
	n = n - 1;
	n--;  
	
	n = n + 5; 
	n += 5; 
	
	n = n - 5; 
	n -= 5; 
	
  	n = n * 5; 
	n *= 5; 
	
	// 증감연산자  
	n = 5; 
	printf("* %d\n", ++n); 
	printf("* %d\n", n); 
	
	n = 5; 
	printf("* %d\n", n++); 
	printf("* %d\n", n); 
	
	return 0; 
}
