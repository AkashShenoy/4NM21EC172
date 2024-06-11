#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int position;
    scanf("%d", &position);

    int row = (position - 1) / 3;
    int column = (position - 1) % 3;

    printf("%d %d\n", row, column);
    return 0;
}
