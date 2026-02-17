#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float baseSalary, hra, da, ta, grossSalary;
    float angle1, angle2, angle3;
    int result;
    
    printf("1. Temperature Converter (Celsius to Fahrenheit)\n");
    printf("2. Gross Salary Calculator\n");
    printf("3. Triangle Angle Finder\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &result);

    switch(result) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (9.0 / 5.0)*celsius+32;
            printf("Temperature in Fahrenheit: %.1f\n", fahrenheit);
            break;
        case 2:
            printf("Enter base salary: ");
            scanf("%f", &baseSalary);
            printf("Enter HRA percentage: ");
            scanf("%f", &hra);
            printf("Enter DA percentage: ");
            scanf("%f", &da);
            printf("Enter TA percentage: ");
            scanf("%f", &ta);
            grossSalary = baseSalary + (baseSalary * hra / 100) + 
                          (baseSalary * da / 100) + (baseSalary * ta / 100);
            printf("Gross Salary: Rs. %.2f\n", grossSalary);
            break;
        case 3:
            printf("Enter first angle: ");
            scanf("%f", &angle1);
            printf("Enter second angle: ");
            scanf("%f", &angle2);
            angle3 = 180 - (angle1 + angle2);
            printf("Third angle: %.2f\n", angle3);
            break;

        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
