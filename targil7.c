#include <stdio.h>
#include <math.h>

void flip();

int main(int argc, char const *argv[])
{
    

    flip();
    return 0;
}

void flip()
{
    int a[6] = {1,5,0,2,8,3}, m =2 ,n=4;
    int i, j, temp;
    for (size_t i = 1; i <= n; i++)
    {
        temp = a[m+n-1];
        for (size_t j = n + m -1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    for (size_t i = 0; i < m + n ; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}