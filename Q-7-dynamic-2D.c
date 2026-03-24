#include <stdio.h>
#define pf printf

int main()
{
    int row, col;
    pf("Enter row : ");
    scanf("%d", &row);
    pf("Enter column : ");
    scanf("%d", &col);

    int a[row][col];

    pf("\n Array input \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        pf("\n");
    }

    pf("\n Array output \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("%d ", a[i][j]);
        }
        pf("\n");
    }

    int sum = 0; 


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
    }

    pf("\n\n");
    pf("\nSum of 2D Array : %d", sum);
    pf("\nAVG of 2D Array : %.2f\n", (float)sum / (row * col));
}
