#include <stdio.h>
#define pf printf

int main()
{

    int size;

    pf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    pf("\n\n Array Input \n\n");
    for (int i = 0; i < size; i++)
    {
        pf("Enter the element : ");
        scanf("%d", &array[i]);
    }

    pf("\n\n Array Output \n\n");
    for (int i = 0; i < size; i++)
    {
        pf("%d\n\t", array[i]);
    }

    int sum = 0;

    for (int  i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    pf("\n\n");
    pf("\nArray Sum\t : %d", sum);
    pf("\nArray AVG\t : %.2f", (float)sum / size);
}