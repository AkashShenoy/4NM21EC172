#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float prncpl,intrate, years;
    float intrst,amnt,dscnt,final;
    scanf("%f",&prncpl);
    scanf("%f",&intrate);
    scanf("%f",&years);
    intrst=(intrate/100)*prncpl*years;
    amnt=intrst+prncpl;
    dscnt=intrst*0.02;
    final=amnt-dscnt;
    printf("%.2f\n%.2f\n%.2f\n%.2f",intrst,amnt,dscnt,final);
    return 0;
}
