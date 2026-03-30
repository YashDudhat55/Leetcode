#include <stdio.h>
#include <string.h>
#define pf printf

int main()
{

    char str[100];
    char reverse[100];

    pf("Enter any string : ");
    scanf("%s", str);

    strcpy(reverse, str);

    strrev(reverse);

    int cmp = strcmp(str, reverse);

    if (cmp == 0)
    {
        pf("The string is a palindrome.");
    }
    else
    {
        pf("The string is not a palindrome.");
    }
}