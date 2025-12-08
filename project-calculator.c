//project-calculator
#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    while (1) {
        printf("\n====== SIMPLE CALCULATOR ======\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting Calculator...\n");
            break;     // exit the loop
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                }
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
