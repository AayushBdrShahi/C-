#include<stdio.h>
#include "lodepng.h"

int main(){
	//decoding an image
	unsigned int error;
	unsigned int h,w;
	unsigned char *pixels;
	error = lodepng_decode32_file(&pixels,&w,&h,"1.png");
	printf("%s",lodepng_error_text(error));
	printf("image resolution: %dx%d\n",h,w);
	
	//displaying pixels information
//	int i;
//	for(i=0;i<h*w*4;i++){
//		printf("%d,",pixels[i]);
//	}


	//manupulate the pixels information
	// Negative 
	int i;
	for(i=0;i<h*w*4;i=i+4){
		//for negative
		pixels[i] = 255 - pixels[i];
		pixels[i+1] = 255 - pixels[i+1];
		pixels[i+2] = 255 - pixels[i+2];

// 		for greyscale
//		int g = (pixels[i]+pixels[i+1]+pixels[i+2])/3;
//		pixels[i] = g;
//		pixels[i+1] = g;
//		pixels[i+2] = g;
	}
	
	//encode the numeric values into a new image
	lodepng_encode32_file("new.png",pixels,w,h);
}