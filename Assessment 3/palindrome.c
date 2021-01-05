#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include<limits.h>

#define FALSE 0
#define TRUE 1

typedef int Bool;
//calling the function that i created
Bool palindrome_check(char str[]);

//this function checks if our string is a palindrome or not
Bool palindrome_check(char str[])
{
    //declaring my variables using pointers aswell
   int l = 0;
   int *p;
   p = &l;

   //strlen() is used to return number of characters in a string
   int r = strlen(str)-1;

   //if our left string is not equal to our right string then returh False if not Return True
   while (*p < r)
   {
       if(str[*p] != str[r])
           return FALSE;
       p++;
       r--;
   }
   return TRUE;
}

int main(void)
{

    char stri[100], ch;
    char *ptr;
    int i = 0;
    int *y;
    y = &i;

    printf("Please enter a string:  ");
    while((*ptr = getchar()) != '\n'){
        //if our string is an integer we must return Invalid
        if(*ptr >= '0' && *ptr <= '9')
        {
            printf("\nInvalid input: Numbers not permitted.\n");
            printf("\n");
            return 0;
        }

        // If there are spaces and punctuation in our string this will get rid of it, we are also putting everything to lowercase letters in the string
        if (!isspace(*ptr) && !ispunct(*ptr))
        {
            stri[*y] = tolower(*ptr);
            i++;
        }
    }
    stri[*y] = '\0';

    //if our string is a palindrome print out line or print the else statement.
    if(palindrome_check(stri))
        printf("\nthis string is a palindrome.\n");
    else
        printf("\nThis string is not a palindrome.\n");

    return 0;
}

