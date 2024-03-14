#include<stdio.h>
#include<stdlib.h>
int main(){
    int size1,size2,i,j;
    printf("Enter the size of an first array:");
    scanf("%d",&size1);
    int *p;
    p = malloc(size1 *sizeof(size1));
    printf("Enter the elemnents in first array:");
    for(i=0;i<size1;i++){
    scanf("%d", (p+i));
    }

    printf("Enter the size of an Second  array:");
    scanf("%d",&size2);
    int *p1;
    p1 = malloc(size2 *sizeof(size2));
    printf("Enter the elemnents in second array:");
    for(i=0;i<size2;i++){
    scanf("%d", (p1+i));
    }

    for(j=0;j<size1 &&  j<size2;j++){
        printf("Sum of two arrays %d is %d\n ", j, *(p+j) + *(p1+j));
    }
    free(p);
    free(p1);

}