// #include<stdio.h>
// #include "lodepng.h"
// int main(){
//     unsigned int h,w;
//     unsigned char *pixel;
//     lodepng_decode32_file(&pixel,&w,&h,"1.png");
//     printf("Image resolution: %dx%d",h,w);
//     int i,temp;
//     for(i=0;i<h*w*4;i=i+4){
//     temp=pixel[i];
//     pixel[i]=pixel[i+1];
//     pixel[i+1]=pixel[i+2];
//     pixel[i+2]=temp;
//     }
//     lodepng_encode32_file("new.png",pixel,w,h);
// }


#include<stdio.h>
#include "lodepng.h"
int main(){
    unsigned int error;
	unsigned int h,w;
	unsigned char *pixels;
	error = lodepng_decode32_file(&pixels,&w,&h,"1.png");
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
    lodepng_encode32_file("new.png",pixels,w,h);
	
}