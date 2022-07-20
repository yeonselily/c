#include <stdio.h>
#define M 20 
// ��� M�� 20�̴� 
 
int main(int argc, char *argv[]){
	/* Strictly typed 
 	�ڷ��� (� ������ Ÿ�� ���ϱ�) 
 	������ Ÿ��  
	int  ����, �� / �� / 0     -4, -3, -2, 0 ,1, 2, 3 ....  sizeof(int) = 4byte 
	long	����(ū ����)  sizeof(long) = ������ ���α׷��� 4byte  �������� 8  byte 
	float 	�Ǽ�, ��/��  10.1, 15.3     sizeof(float) = 4 byte
	double  �Ǽ�(ū ����) 				sizeof(double)	= 8 byte
	char 	����( ���ĺ� �ϳ�)  c, d  	sizeof(char) = 1byte
	
	*/ 
	
	//����(variable)   
	int n = 0;  
	n = 5; 
	printf("value of n: %d\n", n);  
	n = 10; 
	printf("value of n: %d\n", n);
	
	// ���(constant) :�� ���� ���α׷� ����Ǵ� ����  
	const int X = 123; // *const* keyword  
	printf("value of M: %d\n", M);
	printf("value of X: %d\n", X); 
	// X = 321; // read-only variable x: error  
	  
	printf("int: %d\n",sizeof(int)); // decimal  ������ ���  4 byte 
	printf("long: %d\n",sizeof(long));	// 4 byte in window platform 
	printf("float: %d\n",sizeof(float));	// 4 byte
	printf("double: %d\n",sizeof(double)); // 8 byte
	printf("char: %d\n",sizeof(char)); // 1 byte (�ƽ�Ű�ڵ� ����)  int  char ���о��� ��� ���� !  
	
	
	return 0; 

}
