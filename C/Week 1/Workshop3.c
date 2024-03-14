#include<stdio.h>

int main() {
    int a, fact = 1;
    printf("Enter a number:");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        fact = fact * i; // Use the loop variable i instead of a
    }

    printf("The factorial of %d is %d\n", a, fact);
    return 0;
}
