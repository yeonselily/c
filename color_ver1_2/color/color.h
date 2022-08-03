#ifndef __COLOR_H__
#define __COLOR_H__

typedef struct color{
	int r, g, b;
}COLOR;

/*
struct color_rgb{
	char alpha, b, g, r;
};

typedef union color{
	int code;
	struct color_rgb comp;
}COLOR; */


void color_set_rgb(COLOR *c,  int r, int g, int b);
void color_print_cmyk(COLOR *c);

#endif
