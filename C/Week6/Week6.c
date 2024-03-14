// # include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// //int main(){

//     FILE   *file;
//   file=  fopen("myfile.txt","w");
//   char name[] = "Alice";
//   int i;
//   for(i=0;i<strlen(name);i++){
//       fputc(name[i], file);
//   }
// fprintf(file,"%s",name);




// to take 

//  FILE   *file;
//   file=  fopen("myfile.txt","r");
//   int x;
//   float y;
//   fscanf(file,"%d,%f",&x,&y);
//   printf("%d and %f", x,y);




// FILE   *file;
// file=  fopen("myfile.txt","r");
// char c;
// c = fgetc(file);
//    printf("%c",c);


// // while(c!= EOF){
// //     printf("%c",c);
// //     c = fgetc(file);
// // }
  


//   struct student{
//     int roll;
//     char name[20];
//     float marks;

//   };
//   int  main(){
//     struct student s = {1, "Mike",56.8};

//     FILE *file;
//     file = fopen("myfile.txt","w");
// //fprintf(file,struct student s);
//  }




//////////////////////     Workshop /////////////////

// #include<stdio.h>
// #include<string.h>
// typedef struct employee{
//   char name[20];
//   int age;
//   float salary;
// }employee;
// int main(){
//   employee e[5];
//   int i,size=5;
//   for(i=0;i<size;i++){
//     printf("Enter the name:");
//     scanf("%s", e[i].name);
//     printf("Enter the age: ");
//     scanf("%d",&e[i].age);
//     printf("Enter the salary:");
//     scanf("%f", &e[i].salary);


//     FILE *file;
//      file=  fopen("myfile.txt","w");
//      for(int i=0;i<size;i++){
//           fprintf(file,"Name: %s \n",e[i].name);
//           fprintf(file,"Age: %d\n",e[i].age);
//           fprintf(file,"Salary:%f\n",e[i].salary);

//      }
//   }
// }


//////2////


// #include<stdio.h>
// #include<string.h>
// int main(){
// FILE *file;
// file = fopen("myfile.txt","r");



