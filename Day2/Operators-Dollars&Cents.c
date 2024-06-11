#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dollar1, cent1, dollar2, cent2;
    scanf("%d %d %d %d", &dollar1, &cent1, &dollar2, &cent2);

    int total_cents = cent1 + cent2;
    int total_dollars = dollar1 + dollar2 + (total_cents / 100);
    int remaining_cents = total_cents % 100;

    printf("%d\n%d\n", total_dollars, remaining_cents);

    return 0;
}
