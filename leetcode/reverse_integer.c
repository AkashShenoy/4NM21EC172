//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range  then return 0.
#include<stdio.h>
#include<limits.h>
#define INT_MAX 2147483647


long long int reverse(long long int x){
  long long rev = 0;
    while (x != 0) {
   long long int digit = x % 10;
        if (rev > (INT_MAX - digit) / 10|| rev < (INT_MIN - digit) / 10)
         { 
            return 0;
        }
        else
        rev = rev * 10 + digit;
        x /= 10;
    }
    
    return rev;
}