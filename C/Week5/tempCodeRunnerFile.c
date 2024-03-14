#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
    char name[20];
    int salary;
    int hours;
} employee;

void highest(int n, employee *e) {
    int i;
    int highestSalary = 0;
    for (i = 0; i < n; i++) {
        if (e[i].salary >= highestSalary) {
            highestSalary = e[i].salary;
        }
    }
    printf("Highest Salary: $%.2d\n", highestSalary);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    employee *e = (employee *)malloc(n * sizeof(employee));

    for (int i = 0; i < n; i++) {
        printf("Enter a name: ");
        scanf("%s", e[i].name);
        printf("Enter a salary: ");
        scanf("%d", &e[i].salary);
        printf("Enter hours: ");
        scanf("%d", &e[i].hours);
    }

    highest(n, e);

    free(e);

    return 0;
}
