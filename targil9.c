#include <stdio.h>
#include <math.h>
#define ROW 4
#define COL 4

int main(int argc, char const *argv[])
{
    int Aarr[ROW][COL] = {{4, 7, 1, 2}, {3, 3, 5, 7}, {8, 2, 1, 1}, {3, 6, 5, 6}};
    int Barr[ROW][COL] = {{4, 3, 8, 3}, {7, 3, 2, 6}, {1, 5, 1, 5}, {2, 7, 1, 6}};
    int truecount, rcount, actualrcount;
    actualrcount = truecount = rcount = 0;
    for (size_t i = 0; i <= ROW * COL; i++)
    {
        if ( i !=0 && i % COL == 0) //! on row jump
        {
            printf("\n");
            rcount++;

            if (truecount == 4)
            {
                printf("Row: %d of Aarr is equal to Col :%d of Barr", rcount , rcount );
                truecount = 0;
                actualrcount++;
            }
            else
            {
                printf("Row: %d of Aarr is not equal to Col :%d of Barr", rcount , rcount );
                truecount = 0;
            }
        }
        if (Aarr[rcount][i - (rcount * 4)] == Barr[i - (rcount * 4)][rcount])
        {
            truecount++;
        }
    }

    printf("\n\n");

    return 0;
}
