#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mid_max(float a, float b, float c);
void count_peaks(int heights[16]);

int main(int argc, char const *argv[])
{
    int h[] = {200, 337, 200, 435, 380, 400, 120, 200, 250, 328, 310, 406, 167, 300, 350, 206};

    count_peaks(h);

    return 0;
}

int mid_max(float a, float b, float c)
{
    if (a < b && b > c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void count_peaks(int heights[16])
{
    for (size_t i = 1; i < 15; i++)
    {
        if (mid_max(heights[i - 1], heights[i], heights[i + 1]))
        {
            printf("%d is a peak ^ \n",heights[i]);
        }
    }
}