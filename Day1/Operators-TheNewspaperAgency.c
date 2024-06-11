#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int total_revenue = a * b;
    int total_cost = a * c + 100;
    int profit = total_revenue - total_cost;

    printf("%d\n", profit);
    return 0;
}
