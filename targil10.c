#include <stdio.h>
#include <math.h>
#define ROW 4
#define COL 4

int main(int argc, char const *argv[])
{
    int Aarr[ROW][COL] = {{4, 7, 1, 2}, {3, 3, 5, 7}, {8, 2, 1, 1}, {3, 6, 5, 6}};
    int Barr[ROW][COL] = {0};
    int rcount = 0;

    for (size_t i = 0; i < ROW * COL; i++)
    {
        if (i != 0 && i % COL == 0) //! on row jump
        {
            printf("\n");
            rcount++;
        }
        //    printf("%d   ", Aarr[i - (rcount * 4)][rcount]); // to see that its working  properly! :)
        Barr[rcount][i - (rcount * 4)] = Aarr[i - (rcount * 4)][rcount];
        printf("%d " , Barr[rcount][i - (rcount * 4)] );
    }
    printf("\n  ");
    return 0;
}
