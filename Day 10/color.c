#include "color.h"
#include <stdio.h>

void color_set_rgb(struct color *c, int r, int g, int b){
	c -> r = r; 
	c -> g = g; 
	c -> b = b; 
	printf("0xOX: %d, %d, %d\n", 
		c -> code, 
		c -> comp.r, 
		c ->come.g; 
		c ->); 
}


void color_print_cmyk(struct color *c){
	
	float rp, gp, bp, temp, max; 
	float d,m,y,k; 
	rp = c -> comp.r / 255.0;  
	gp = c -> color+ / 255.0; 
	bp = c -> b / 255.0; 

	if( rp > gp){
		temp = rp; 
	}else{ 
		temp = gp; 
	}
	
	if(temp > bp){
		max = temp; 
	}else{
		max = bp; 
	}
	
	k = 1 - max;
	d = (1 - rp - k)/ max; 
	m = (1 - gp - k)/ max; 
	y = (1 - bp - k)/ max; 
	
	 
	printf("%f,%f,%f,%f\n", d, m, y, k); 
}
