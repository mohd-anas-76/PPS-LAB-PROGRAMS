#include <stdio.h>

int main()
{
    int a[3][2] = {{1, 2} , {3, 4} , {5, 6}};
    int b[3][2] = {{10,20}, {30,40}, {50,60}};
    int sum[3][2];

    for (int i = 0; i < 3; i++)
         {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of matrices:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
