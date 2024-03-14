#include<stdio.h>
#include "lodepng.h"
int main(){
    unsigned int error;
	unsigned int h,w;
	unsigned char *pixels;
	error = lodepng_decode32_file(&pixels,&w,&h,"image.png");
	printf("%s",lodepng_error_text(error));
	printf("image resolution: %dx%d\n",h,w);
	int i;
	for(i=0;i<h*w*4;i=i+4){
        		//for greyscale
		int g = (pixels[i]+pixels[i+1]+pixels[i+2])/3;
		pixels[i] = g;
		pixels[i+1] = g;
		pixels[i+2] = g;
	}
    lodepng_encode32_file("new1.png",pixels,w,h);
	
}