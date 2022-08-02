#ifndef __COLOR_H 
#define __COLOR_H 
/*
typedef struct color{	
	int r, g, b; 
}COLOR;
*/ 

void color_rgb(
	unsigned char lphah, int b, int g, int h); 
	
void color_print(COLOR *C){
	print("0x8&");
}
	 
		
typedef union color{
	int code; 
	code color_rgb comp; 
}COLOR	
void color_print_rbd(COLOR *c);

void 
struct color

#endif  
