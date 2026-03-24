#include <stdio.h>
#define pf printf

int main()
{
    int row, col;

    pf("Enter row : ");
    scanf("%d", &row);
    pf("Enter column : ");
    scanf("%d", &col);

    int a[row][col], b[row][col];
    int sum = 0;

    pf("\n Array input : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        pf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        pf("\n");
    }

    pf("\n array output : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("%d ", a[i][j] + b[i][j]);
        }
        pf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j] + b[i][j];
        }
    }

    pf("\nSum of 2D Array : %d", sum);
    pf("\nAVG of 2D Array : %.2f", (float)sum / (row * col));
}