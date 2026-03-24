#include <stdio.h>
#define pf printf

int main()
{

    int size;

    pf("Enter number elements : ");
    scanf("%d", &size);

    int a[size], b[size];
    int sum[size];

    pf("\n\n Array 01 Inpurt\n");
    for (int i = 0; i < size; i++)
    {
        pf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    pf("\n\n Array 02 Inpurt\n");
    for (int i = 0; i < size; i++)
    {
        pf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    pf("\n\n Sum of Array 01 and Array 02\n");
    for (int i = 0; i < size; i++)
    {
        pf("%d\t", sum[i]);
    }

    return 0;
}