#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,s1,s2,sum;
    scanf("%d",&a);
    if(a<0){
        a=-a;
    }
    s1=a%10;
    s2=a/1000;
    sum=s1+s2;
    printf("%d",sum);
    return 0;
}
