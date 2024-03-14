// 1 Create a structure named employee having members: empName, age and salary. Use this
// structure to read the name, age and salary of 3 employees and write entered information to a
// file employee.txt D:\ drive.

// #include<stdio.h>
//  #include<string.h>
// typedef struct employee{
//   char name[20];
//   int age;
//   float salary;
// }employee;
// int main(){
//         FILE *file;
//      file=  fopen("employee.txt","w");
//   employee e[3];
//   int i,size=3;
//   for(i=0;i<size;i++){
//     printf("Enter the name:");
//     scanf("%s", e[i].name);
//     printf("Enter the age: ");
//     scanf("%d",&e[i].age);
//     printf("Enter the salary:");
//     scanf("%f", &e[i].salary);

//           fprintf(file,"Name: %s \n",e[i].name);
//           fprintf(file,"Age: %d\n",e[i].age);
//           fprintf(file,"Salary:%.2f\n",e[i].salary);
          
//      }
//      fclose(file);
// }




// Write a program to read information from the above file employee.txt.

// #include<stdio.h>
// int main(){
// FILE *file;
// file = fopen("employee.txt", "r");

// char myfile[100];
// while(fgets(myfile,100,file)){
//     printf("%s \n", myfile);
// }
// fclose(file);
// }

// WAP to add new employee details in employee.txt file.

// #include<stdio.h>

// typedef struct employee{
//     char newName[20];
//     int Age;
//     float Salary;
// }employee;
// int main(){

// FILE *file;
// file=  fopen("employee.txt","a");
// employee e;
//      printf("Enter the new employee name:");
//     scanf("%s", e.newName);
//     printf("Enter the employee age: ");
//     scanf("%d",&e.Age);
//     printf("Enter the employee salary:");
//     scanf("%f", &e.Salary);

//      fprintf(file,"Name: %s \n",e.newName);
//      fprintf(file,"Age: %d\n",e.Age); 
//      fprintf(file,"Salary:%.2f\n",e.Salary);
// fclose(file);
// }

// Write a program in C to read integers from the user until the user says "no". After reading the data write all the odd numbers to a file named odd.txt and all the even numbers to file even.txt.

// #include <stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main() {
//     FILE *oddFile, *evenFile;
//     int num;
//     char choice[3];

//     // Open files for writing
//     oddFile = fopen("odd.txt", "w");
//     evenFile = fopen("even.txt", "w");

//     // Read integers until the user enters "no"
//     do {
//         printf("Enter an integer (or 'no' to stop): ");
//         scanf("%s", choice);

//         if (strcmp(choice, "no") != 0) {
//             num = atoi(choice);

//             // Check if the number is even or odd
//             if (num % 2 == 0) {
//                 fprintf(evenFile, "Number is %d\n", num);
//             } else {
//                 fprintf(oddFile, "Number is %d\n", num);
//             }
//         }
//     } while (strcmp(choice, "no") != 0);

//     // Close files
//     fclose(oddFile);
//     fclose(evenFile);

//     printf("Numbers have been written to odd.txt and even.txt.\n");

//     return 0;
// }
// 5. Write a program to copy content from odd.txt and event.txt file to a new file numbers.txt file.


// #include<stdio.h>
// int main(){


//     FILE *odd, *even, *numbers;

//     char line[100];
//     odd = fopen("odd.txt","r");
//     even = fopen("even.txt","r");


//     numbers = fopen("numbers.txt","w");


//     while (fgets(line, sizeof(line), odd)) {
//         fprintf(numbers, "%s", line);
//     }

//     while (fgets(line, sizeof(line), even)) {
//         fprintf(numbers, "%s", line);
//     }

//      fclose(odd);
//     fclose(even);
//     fclose(numbers);

//     printf("Content copied to numbers.txt.\n");

   
//}

// 6. Write a c program to read integers from the user and append the sum to the end in the file
// name sum.txt.


// #include<stdio.h>
// int main(){


// FILE *file;
// file =fopen("sum.txt","a");
//     int a,  sum=0;
//     printf("Enter any numbers and (non-integersto stop) :");


//     while(scanf("%d",&a)==1){
//     sum+=a;
//     fprintf(file, "%d ", a);
//     fprintf(file, "\n sum: %d\n ", sum);
//     }
//     fclose(file);
// }