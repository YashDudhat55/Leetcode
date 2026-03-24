#include <stdio.h>
#define pf printf

int main()
{
    int row, col;

    pf("\nEnter row : ");
    scanf("%d", &row);
    pf("\nEnter column : ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("\nEnter arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    pf("\n Array output : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("%d ", arr[i][j]);
        }
        pf("\n");
    }

    pf("\nBoundary Elements :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                pf("%d ", arr[i][j]);
            }
            else
            {
                pf("  ");
            }
        }
        pf("\n");
    }
}