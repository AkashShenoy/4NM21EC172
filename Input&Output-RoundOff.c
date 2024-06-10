#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float value;
    scanf("%f", &value);

    int rounded_down = (int)floor(value);
    int rounded_up = (int)ceil(value);

    printf("%d\n", (int)value);
    printf("%d\n", rounded_up);
    printf("%d\n", rounded_down);

    return 0;
}
