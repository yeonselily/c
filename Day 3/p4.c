#include <stdio.h>
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
int main(int arc, char *argv[]){	
	int i, sum = 0, sum3= 0, sum5 = 0 ; 
	
	for( i = 1; i < 1000; i++){
		
		if(i % 3 == 0){
			sum3 += i; 
		}
		if(i % 5 == 0){
			sum5 += i;  
		}
		if(i % 3 == 0 || i % 5 == 0){
			sum += i; 
		}
	}
	
	printf("sum3: %d\n", sum3);
	printf("sum5: %d\n", sum5);
	printf("sum3 + sum5: %d\n", sum3 + sum5);   
	printf("sum: %d\n", sum);
	return 0;
}
