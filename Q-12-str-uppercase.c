#include <stdio.h>
#define pf printf

main ()
{
    char str[50];

    pf("Enter any String :");
    scanf("%[^\n]", &str);

    pf("\n\n");
    pf("String : %s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }      
    }

    pf("String : %s", str);
    
}