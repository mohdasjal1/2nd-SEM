#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    while (1) {
        printf("1. Convert Celsius to Fahrenheit\n");
        printf("2. Convert Fahrenheit to Celsius\n");
        printf("3. Quit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                convertedTemperature = (temperature * 9/5) + 32;
                printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
                break;
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                convertedTemperature = (temperature - 32) * 5/9;
                printf("Temperature in Celsius: %.2f\n", convertedTemperature);
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
