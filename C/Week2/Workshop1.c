// 1. Write a void function which finds and prints the midpoint coordinates of a line. The
//function should take in four parameters (x1, y1, x2 and y2). xmid=(x1+x2)/2, ymid=(y1+y2)/2

#include<stdio.h>
int function( int x1, int x2, int y1, int y2){
    int xmid =(x1+x2)/2;
    int ymid =(y1+y2)/2;
    printf("the coordinates of xmid and ymid (%d,%d)",xmid,ymid);
    return 0 ;
}
int main(){
    int x1,x2,y1,y2 ;
    printf("Enter the cordinates of x1,y1,x2,y2 \n");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    function(x1,y1,x2,y2);
 
return 0 ;
}


