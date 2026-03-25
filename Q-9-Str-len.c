#include <stdio.h>
#define pf printf

int main()
{

    char str[100];

    pf("Enter any string : ");
    scanf("%[^\n]", str);

    pf("\n\n");
    pf("String : %s\n", str);

    int len = 0;

    for (int i = 0; str[i] != '\0'; i++, len++)
        pf("Length of the string: %d\n", len); // Subtract 1 to exclude the newline character
    return 0;
}
