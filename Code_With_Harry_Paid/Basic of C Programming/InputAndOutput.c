#include <stdio.h>
int main()
{
    int age;
    float salary;

    printf("Enter your age: ");
    scanf("%d", &age);

    // %d is format specifier for int
    printf("Enter your salary: ");
    scanf("%f", &salary); // %f is format specifier for float
    
    printf("You are %d years old and your salary is %.2f\n", age, salary);
    
    return 0;

}