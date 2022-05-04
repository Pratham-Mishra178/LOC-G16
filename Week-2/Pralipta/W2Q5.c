#include <stdio.h>
int main() {
    int a[100][100], b[100][100], sum[100][100], i, j, result[100][100];
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSUM OF MATRICES: \n\n");
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == 1)
            {
                printf("\n\n");
            }
        }
    }


    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result[i][j] += a[i][j] * b[i][j];
        }
    }

    printf("\nPRODUCT OF MATRICES: \n\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d  ", result[i][j]);
            if (j == 1)
            {
                printf("\n\n");
            }
        }

    }

    return 0;
}