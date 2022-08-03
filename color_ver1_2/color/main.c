#include <stdio.h>
#include <stdlib.h>
#include "color.h"

int main(int argc, char *argv[]) {
	
	COLOR c1;
	//struct color c1;
	
	color_set_rgb(&c1, 255,0,0); // red 
	color_print_cmyk(&c1); // (0,1,1,0)
	//print("%s\n", color_cmyk(&c1)); // (0,1,1,0)
	
	
	return 0;
}
