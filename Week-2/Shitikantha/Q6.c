#include <stdio.h>
#include <stdlib.h>


    void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i==1 || i==n || j==1 || j==m)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}
int main()
{
    int rows = 5, columns = 5;
    print_rectangle(rows, columns);
    return 0;
}

