//Count digits,alphabet,alpha-numeric,lower case,upper case and toggle the string using ctype library

#include <stdio.h>
#include <ctype.h>

int main(){
    char text[1024];
    scanf("%s",text);
    int countDigit=0, countAlpha=0, countAlNum=0, countLower=0, countUpper=0;
    for(int I=0; text[I]!='\0'; I++){
        if(isdigit(text[I])){
            countDigit++;
        }
         if(isalpha(text[I])){
            countAlpha++;
        }
         if(isalnum(text[I])){
            countAlNum++;
        }
         if(islower(text[I])){
            countLower++;
        }
         if(isupper(text[I])){
            countUpper++;
        }
    }
    for(int I=0; text[I] != '\0'; I++){
        if(islower(text[I])){
            text[I]=toupper(text[I]);
        }
        else if(isupper(text[I])){
            text[I]=tolower(text[I]);
        }
    }
    printf("Number of Digits         = %d\n",countDigit);
    printf("Number of Alphabets      = %d\n",countAlpha);
    printf("Number of Alpha Numerics = %d\n",countAlNum);
    printf("Number of Uppercases     = %d\n",countUpper);
    printf("Number of Lowercases     = %d\n",countLower);
    printf("The Case Toggled Text is : %s",text);
    return 0;
}