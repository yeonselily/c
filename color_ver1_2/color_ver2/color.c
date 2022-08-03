#include <stdio.h>
#include "color.h"

void color_set_rgb(COLOR *c,  int r, int g, int b){
	c->code = 0;
	c->comp.r = r;
	c->comp.g = g;
	c->comp.b = b;
	/*
	c->r = r;
	c->g = g;
	c->b = b;*/
}

void color_print(COLOR *c){
	printf("0x%X: %d,%d,%d\n", 
			c->code, c->comp.r, c->comp.g, c->comp.b );
}

void color_print_cmyk(COLOR *c){
	float rp, gp, bp, temp, max;
	float d,m,y,k;
	
	rp = c->comp.r/255.0;
	gp = c->comp.g/255.0;
	bp = c->comp.b/255.0;
	
	if(rp > gp)
		temp = rp;
	else
		temp = gp;
		
	if(temp > bp)
		max = temp;
	else
		max = bp;
		
	k = 1-max;
	d = (1-rp-k)/max;
	m = (1-gp-k)/max;
	y = (1-bp-k)/max;
	
	printf("%f,%f,%f,%f\n", d,m,y,k);
}
