#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int x, y;
    scanf("%d %d", &x, &y);

    int peter_x = 3, peter_y = 4;
    int hops_x = abs(x - peter_x);
    int hops_y = abs(y - peter_y);
    int total_hops = hops_x > hops_y ? hops_x : hops_y;

    printf("%d\n", total_hops);
    return 0;
}
