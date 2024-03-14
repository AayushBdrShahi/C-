

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x_squared = 0;
    int n = 0;

    // Open all four files
    FILE *fp1 = fopen("datasetLR1.txt", "r");
    FILE *fp2 = fopen("datasetLR2.txt", "r");
    FILE *fp3 = fopen("datasetLR3.txt", "r");
    FILE *fp4 = fopen("datasetLR4.txt", "r");

    

    // Read data from all files and calculate sum of x, y, xy, x^2
    while (fscanf(fp1, "%d,%d", &x, &y) != EOF) {
        sum_x += x;
        sum_y += y;
        sum_xy += x * y;
        sum_x_squared += x * x;
        n++;
    }
    fclose(fp1);
  
    // Repeat the process for all four files
    while (fscanf(fp2, "%d,%d", &x, &y) != EOF) {
        sum_x += x;
        sum_y += y;
        sum_xy += x * y;
        sum_x_squared += x * x;
        n++;
    }
        fclose(fp2);


    while (fscanf(fp3, "%d,%d", &x, &y) != EOF) {
        sum_x += x;
        sum_y += y;
        sum_xy += x * y;
        sum_x_squared += x * x;
        n++;
    }
        fclose(fp3);


    while (fscanf(fp4, "%d,%d", &x, &y) != EOF) {
        sum_x += x;
        sum_y += y;
        sum_xy += x * y;
        sum_x_squared += x * x;
        n++;
    }
    fclose(fp4);

printf("%d", n);
    // Calculate coefficients using LR formula
    float b = (n * sum_xy - sum_x * sum_y) / (n * sum_x_squared - sum_x * sum_x);
    float a = (sum_y * sum_x_squared - sum_x * sum_xy) / (n * sum_x_squared - sum_x * sum_x);


    printf("The value of: a = %.2f and b = %.2f\n\n", a, b);

    // Output the linear equationn
    printf("The linear equation (y=bx+a) is: y = %.2f x + %.2f\n", b, a);

    float user_x;
    printf("Enter the value of x: ");
    scanf("%f", &user_x);

    // Calculate corresponding value of y using the linear equation
    float user_y = b * user_x + a;
    printf("For x = %.2f, y = %.2f\n", user_x, user_y);
 

    return 0;
}