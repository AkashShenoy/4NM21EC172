#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int gold_coins, ben_share_percentage, blackbeard_share_percentage;
    scanf("%d %d %d", &gold_coins, &ben_share_percentage, &blackbeard_share_percentage);

    int ben_share = (gold_coins * ben_share_percentage) / 100;
    int remaining_coins = gold_coins - ben_share;
    int blackbeard_share = (remaining_coins * blackbeard_share_percentage) / 100;
    remaining_coins -= blackbeard_share;
    int other_pirates_share = remaining_coins / 3;
    //int leftover_coins = remaining_coins % 3;

    printf("%d\n%d\n%d\n", ben_share, blackbeard_share, other_pirates_share);
    return 0;
}
