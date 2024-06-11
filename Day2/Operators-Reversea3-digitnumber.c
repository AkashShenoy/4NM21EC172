#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,a3,a2,a1;
    scanf("%d",&a);
    a1=a%10;
    a2=(a%100)/10;
    a3=a/100;
    b=(a1*100)+(a2*10)+a3;
    printf("%d",b);
    return 0;
}
