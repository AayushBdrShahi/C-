#include<stdio.h>
#include<stdlib.h>
int main(){
    int size,i,size1;
    printf("Enter the size of an arrays:");
    scanf("%d",&size);
    int *p ;
    p = (int *)malloc(size*(sizeof(int)));
    printf("Enter the elements in the array\n");
    for(i=0;i<size;i++){
        scanf("%d", &p[i]);
    }
    printf("The elements in the arrays are\n");
    for(i=0;i<size;i++){
        printf("%d ", p[i]);
    }
    printf("\n");

printf("Enter the number elements to add:");
scanf("%d",&size1);

 p = (int *) realloc (p,(size+size1)*sizeof(int));

 printf("Enter elements in the new Memory:");
 for(i=0;i < size+size1;i++){
    scanf("%d", &p[i]);
 }
 printf("Updated arrays is: \n");
 for(i=0;i < size+size1;i++){
    printf("%d ", p[i]);
 }
 free(p);

}