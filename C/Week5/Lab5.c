// 1. Create a structure named student that has a name, roll number and marks as members. Assume appropriate types and size of members. Use this structure to
// read and display records of 10 students. Create two functions: One is to read information of students and other to display the information.

// #include<stdio.h>
// typedef struct student{
//         char name[20];
//         int roll;
//         float marks;
//     }student;

// void read(student s[], int size){
//     for(int i=0; i<size;i++){
//      printf("\n Student %d:\n", i+1);
//      printf("Name: ");
//         scanf("%s",s[i].name);
//         printf("Roll no: ");
//         scanf("%d", &s[i].roll);
//         printf("Marks: ");
//         scanf("%f",&s[i].marks);
//     }
// }
// void display(student s[], int size){
//     for(int i=0;i<size;i++){
//         printf("\n Student %d:\n", i+1);
//         printf("Name %s \n",s[i].name);
//         printf("Rollno %d \n ",s[i].roll);
//         printf("Marks %.2f \n",s[i].marks);
//     }
// }
// int main(){
//     student s[10];
//     read(s,10);
//     display(s,10);
// }



// WAP to input name, post and salary of ten employees from main () function and pass to structure type user defined function (argument of this function should also
// be a structure type). This function returns a structure variable which keeps the record of only those employees whose salary is greater than 10,000. This modified
// record is also displayed from the main () function.


// #include <stdio.h>
// #include<string.h>
// typedef struct employees{
//     char name[20];
//     char post[20];
//     float salary;

// }employees;

// employees fl[10];
// int count = 0;
// employees* filteremployee(employees e[],int size, int limit){
//     int i;
//     for(i=0;i<size;i++){
//         if(e[i].salary>limit){
//             strcpy(fl[count].name, e[i].name);
//             strcpy(fl[count].post, e[i].post);
//             fl[count].salary = e[i].salary;
//             count++;
//         }
//     }
//     return fl;
// }
// int main(){
//  employees e[10];
//     int size =10;
//      for(int i =0; i<size;i++){
//     printf("Details of employees %d \n",i+1);
//      printf("Enter a name: ");
//      scanf("%s",e[i].name);
//      printf("Enter a post: ");
//      scanf("%s",e[i].post);
//      printf("Enter a salary: ");
//      scanf("%f", &e[i].salary);
//      }    
     
//      employees* filteredList = filteremployee(e,size,10000);
//      printf("\nFiltered Employee List:\n");
//     for (int i = 0; i < count; i++) {
//         printf("Name: %s, Post: %s, Salary: %.2f\n", filteredList[i].name, filteredList[i].post, filteredList[i].salary);
//     }
// }

// 3 . Write a program that asks the user for two inputs: lower limit and upper limit. Now write a function named display that prints all the numbers between those limits.
// NOTE: You are only allowed to pass one parameter to the function and lower limit and upper limit variables should not be made global.in

//#include<stdio.h>
// typedef struct Limits{
//     int upper;
//     int lower;

// }limit;
// void display(limit l){
//     printf("Numbers between %d and %d is:",l.lower,l.upper);
//     for(int i =l.lower; i<=l.upper;i++){
//         printf("%d ",i);
//     }
// }

// int main(){
//     limit l;
//     printf("Enter a lower limit:");
//     scanf("%d", &l.lower);
//     printf("Enter a Upper Limit:");
//     scanf("%d", &l.upper);

// display(l);
// 


// Create a structure name Student and inside that struct include two data members'roll no and marks, inside that struct student definition create another struct named
// student_info where you should include three data members' name, age, and dateof birth and print it out for 3 students.

// #include<stdio.h>
// typedef struct Student{
//     int rollno;
//     float marks;
// }student;

// typedef struct Student_info{
//     char name[20];
//     int age;
//     int DOB;
//     student s;
// }student_info;

// int main(){
//     student_info s[3];
//     for(int i=0; i<3;i++){
//             printf("Student no %d: \n", i+1);
//         printf("Enter a name:");
//         scanf("%s", s[i].name);
//         printf("Eter a age: ");
//         scanf("%d", &s[i].age);
//         printf("Enter a DOB:");
//         scanf("%d", &s[i].DOB);
//         printf("Enter a rollno:");
//         scanf("%d", &s[i].s.rollno);
//         printf("Enter a marks:");
//         scanf("%f", &s[i].s.marks);
//     }


// for(int i=0;i<3;i++){
//     printf("Student no %d: ", i+1);
//     printf("Name: %s \n", s[i].name);
//     printf("Age %d \n", s[i].age);
//     printf("DOB %d \n", s[i].DOB);
//     printf("Roll no %d \n",s[i].s.rollno);
//     printf("Marks %f \n",s[i].s.marks);
// }
// }


// 5. Write a structure to store the names, salary and hours of work per day of employees in a company. Write a program to increase the salary depending on the
// number of hours of work per day as follows and then print the name of all theemployees along with their final salaries.
// Hours of work per day 8 10 >=12
// Increase in salary $50 $100 $150

// #include<stdio.h>
// typedef struct employees{
//     char name[20];
//     int salary;
//     int hour;
// }employees;

// int main(){
//     employees e [3];
//     for(int i =0;i<4;i++){
//         printf("Enter a name:");
//         scanf("%s", e[i].name);
//         printf("Enter a salary");
//         scanf("%d", &e[i].salary);
//         printf("Enter a hour: ");
//         scanf("%d",&e[i].hour);

//     if(e[i].hour >=12){
//         e[i].salary+=150;
//     }
//     else if(e[i].hour >= 10){
//     e[i].salary+=100;
//     }
//     else if(e[i].hour >=8){
//         e[i].salary+=50;
//     }
//     printf("\n");
// }


//  printf("Employee Details:\n");
//     for (int i = 0; i < 3; i++) {
//         printf("Employee %d:\n", i + 1);
//         printf("Name: %s\n", e[i].name);
//         printf("Final Salary: $%d\n",e[i].salary);
//         printf("\n");
//     }}


// // 6. Create a structure named Employee having members name, salary and hours of work per day. Now, write a program to dynamically create an ‘n’ number of
// // structures of type Employee. Pass this array of structure to a function that printsthe highest salary of the employee.


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Employee {
//     char name[20];
//     int salary;
//     int hours;
// } employee;

// void highest(int n, employee *e) {
//     int i;
//     int highestSalary = 0;
//     for (i = 0; i < n; i++) {
//         if (e[i].salary >= highestSalary) {
//             highestSalary = e[i].salary;
//         }
//     }
//     printf("Highest Salary: $%.2d\n", highestSalary);
// }

// int main() {
//     int n;
//     printf("Enter the number of employees: ");
//     scanf("%d", &n);

//     employee *e = (employee *)malloc(n * sizeof(employee));

//     for (int i = 0; i < n; i++) {
//         printf("Enter a name: ");
//         scanf("%s", e[i].name);
//         printf("Enter a salary: ");
//         scanf("%d", &e[i].salary);
//         printf("Enter hours: ");
//         scanf("%d", &e[i].hours);
//     }

//     highest(n, e);

//     free(e);

//     return 0;
// }
