#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1, y1, x2, y2; 
	POINT temp; 
	POINT *p = NULL; 
	int i, n, m; 
	
	p = point_new(2); 
	for(i = 0; i <2; i++){
		printf("POINT #%d: ", i+1); 
		scanf("%d,%d", &temp.x, &temp.y); 	
		point_set(p+i, temp.x, temp.y); 
	}
	
	for(i = 0; i < 2; i++){
		point_printx(p+i, NULL); 
	}

	printf("distance: %f\n", point_distance(p, p+1)); 
	n = (p[0].x - p[1].x) *	(p[0].x - p[1].x); 
	m = (p[0].y - p[1].y) *	(p[0].y - p[1].y); 
	printf("distance: %f\n", sqrt(n + m)); 
	point_destroy(p); 
	//printf("POINT #2: "); 
	//scanf("%d,%d", &x2, &y2); 
	 
	//printf("p1: %d, %d\n", x1, y1);
	//printf("p2: %d, %d\n", x2, y2);    
	//printf("distance: %f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) *(y2 - y1)));
	return 0;
}
