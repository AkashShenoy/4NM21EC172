#include<stdio.h>
#include <limits.h>
#include<stdbool.h>

int main()
{
    int x;
    scanf("%d",x);
    printf(isPalindrome(x));
}

bool isPalindrome(int x) {
    if(x < 0)
     return false;
    int temp = x;
      long long int rev = 0;
    while (x > 0) {
         long long int digit = x % 10;
        if (rev > (INT_MAX - digit) / 10)
         { 
            return false;
        }
        
        rev = rev * 10 + digit;
        x /= 10;

    }
    return temp==rev;
   }