#include <stdio.h>

// struct alignment, ����.  

struct struct_one{
	int x, y;  // 4+ 4 = 8 
	char a, b; // 1 + 1 = 2
	
};

struct struct_two{
	char a; 
	int x, y;  
	char b; 
	
};

// union  
typedef union union_one{
	int x, y; 
	
}UNION_ONE;


struct color_rgb{
	char alpha, b, g, r; 
};


union color{
	int code; 
	struct color_rgb comp; 
};

int main(int argc, char *argv[]){
	
	printf("struct_one: %d\n", sizeof(struct struct_one)); // 12 byte 
	printf("struct_two: %d\n", sizeof(struct struct_two)); // 16 byte 
	
	union union_one myunion; 
	UNION_ONE myunion2; 
	
	myunion.x = 100; 
	printf("x: %d\n", myunion.x); 
	printf("y: %d\n", myunion.y); 
	myunion.y = 200; 
	printf("y: %d\n", myunion.y); 
	printf("x: %d\n", myunion.x); 
	
	union color mycolor; 
	
	mycolor.code = 0; 
	mycolor.comp.r = 255;
	mycolor.comp.g = 128; 
	mycolor.comp.b = 0; 
	
	printf("0x%x\n", mycolor.code); 
	
	
	/*
	192.168.0.1 = 8 bit * 4 = 32 bit. 
	*/ 
	
	return 0;  
}
