#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num_friends, num_teams;
    scanf("%d %d", &num_friends, &num_teams);

    int friends_per_team = num_friends / num_teams;
    int left_out = num_friends % num_teams;

    printf("The number of friends in each team is %d and left out is %d\n", friends_per_team, left_out);
    return 0;
}
