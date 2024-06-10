#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    float mid_x = (x1 + x2) / 2.0;
    float mid_y = (y1 + y2) / 2.0;

    printf("Arun's house is located at(%.1f,%.1f)\n", mid_x, mid_y);
    return 0;
}
