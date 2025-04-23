#include <stdio.h>

int main()
{
    int r1, r2, c1, c2;
    printf("Enter the size of first matrix(row/coloum):-\n");
    scanf("%d%d", &r1, &c1);
    int arr1[r1][c1];
    printf("Enter the size of second matrix(row/coloum):-\n");
    scanf("%d%d", &r2, &c2);
    int arr2[r2][c2];
    printf("\nEnter the elements of first matrix(Enter the Element row-wise):-\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nEnter the elements of second matrix(Enter the Element row-wise):-\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nHere is the matrix 1:-\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nHere is the matrix 2:-\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    if (c1 == r2)
    {
        int arr3[r1][c2];
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                arr3[i][j] = 0;
            }
        }
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                for (int k = 0; k < r2; ++k)
                {
                    arr3[i][j] += (arr1[i][k] * arr2[k][j]);
                }
            }
        }
        printf("\n");
        for (int i = 0; i < r1; ++i)
        {
            for (int j = 0; j < c2; ++j)
            {
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("You can't perform multiplication because your 1 st matrix coloum does not match to the 2 nd matrix row.");
    }
    return 0;
}