#include <stdio.h>

int main(int argc, char *argv[]){
	
	//������ ����  
	// int n = 7, m = 3; 
	int n = 7; 
	int m = 3; 
	
	printf("+: %d\n", n + m);
	printf("-: %d\n", n - m);
	printf("*: %d\n", n * m);
	printf("/: %d\n", n / m);
	printf("%%: %d\n", n % m);	

	/*
	n % 2 --> 2�� ������� �׽�Ʈ 
	      = 0, 2�� ��� 
		  = 0, 2�� ��� �ƴ�.  
		  
	n % 1000 --> n�� ū �����϶�, ���� ����������� ��.  
    			ex) n = 1983674 
    			    n % 1000 = 674
	*/ 
	
	//��� ������ 
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
	
	// ����������  
	n = 5; 
	printf("* %d\n", ++n); 
	printf("* %d\n", n); 
	
	n = 5; 
	printf("* %d\n", n++); 
	printf("* %d\n", n); 
	
	return 0; 
}
