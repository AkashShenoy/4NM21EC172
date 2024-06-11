#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float truncate_to_two_decimal_places(float value) {
    return floor(value * 100) / 100;
}

int main() {
    char name[100];
    int age;
    float cgpa;
    char grade;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%f", &cgpa);
    scanf(" %c", &grade);

    cgpa = truncate_to_two_decimal_places(cgpa);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}


