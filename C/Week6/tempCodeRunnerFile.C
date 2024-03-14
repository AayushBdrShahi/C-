#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    FILE *oddFile, *evenFile;
    int num;
    char choice[3];

    // Open files for writing
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");

    // Read integers until the user enters "no"
    do {
        printf("Enter an integer (or 'no' to stop): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") != 0) {
            num = atoi(choice);

            // Check if the number is even or odd
            if (num % 2 == 0) {
                fprintf(evenFile, "Number is %d\n", num);
            } else {
                fprintf(oddFile, "Number is %d\n", num);
            }
        }
    } while (strcmp(choice, "no") != 0);

    // Close files
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers have been written to odd.txt and even.txt.\n");

    return 0;
}