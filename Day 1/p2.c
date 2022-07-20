#include <stdio.h>
#define M 20 
// 상수 M은 20이다 
 
int main(int argc, char *argv[]){
	/* Strictly typed 
 	자료형 (어떤 데이터 타입 정하기) 
 	데인터 타입  
	int  정수, 음 / 양 / 0     -4, -3, -2, 0 ,1, 2, 3 ....  sizeof(int) = 4byte 
	long	정수(큰 숫자)  sizeof(long) = 윈도우 프로그램은 4byte  리눅스는 8  byte 
	float 	실수, 음/양  10.1, 15.3     sizeof(float) = 4 byte
	double  실수(큰 숫자) 				sizeof(double)	= 8 byte
	char 	문자( 알파벳 하나)  c, d  	sizeof(char) = 1byte
	
	*/ 
	
	//변수(variable)   
	int n = 0;  
	n = 5; 
	printf("value of n: %d\n", n);  
	n = 10; 
	printf("value of n: %d\n", n);
	
	// 상수(constant) :값 고정 프로그램 실행되는 동안  
	const int X = 123; // *const* keyword  
	printf("value of M: %d\n", M);
	printf("value of X: %d\n", X); 
	// X = 321; // read-only variable x: error  
	  
	printf("int: %d\n",sizeof(int)); // decimal  십진수 출력  4 byte 
	printf("long: %d\n",sizeof(long));	// 4 byte in window platform 
	printf("float: %d\n",sizeof(float));	// 4 byte
	printf("double: %d\n",sizeof(double)); // 8 byte
	printf("char: %d\n",sizeof(char)); // 1 byte (아스키코드 숫자)  int  char 구분없이 사용 가능 !  
	
	
	return 0; 

}
