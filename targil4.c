#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void countSeries(long int n);
int main(int argc, char const *argv[])
{
    // ? input here 
    countSeries(111101111011);

    return 0;
}

void countSeries(long int n)
{
    int index = 0, reset, seriesAmount[12], temp;

    for (size_t i = 0; i < 12; i++)
    {
        seriesAmount[i] = 0;
    }

    while (n > 0)
    {

        temp = n % 10;

        switch (temp)
        {
        case 0:
            seriesAmount[index - 1]++;
            index = 0;
            break;

        case 1:
            index++;
            break;

        default:
            printf("invalid\n");
            return 0;
        }
        n /= 10;
    }
    seriesAmount[index - 1]++;

    for (size_t i = 0; i < 12; i++)
    {
        if (seriesAmount[i] != 0)
        {
               printf("there are %d  series of length %ld\n", seriesAmount[i],i+1);
        }
        
    }
}