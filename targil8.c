#include <stdio.h>
#include <math.h>
#define ROW 4
#define COL 4

int main(int argc, char const *argv[])
{
    int v = -1, h, mv = 0, mh = 0, inith, x = 0, y = 0, ftdarr[ROW][COL] = {{4, 7, 1, 2}, {3, 3, 5, 7}, {8, 2, 1, 1}, {3, 6, 5, 6}}, stdarr[ROW][COL];

    for (size_t i = 1; i <= ROW * COL; i++)
    {
        printf("%d ", ftdarr[0][i - 1]);
        if (i % COL == 0)
        {
            printf("\n");
        }
    }
    printf("------------\n");

    while (mv < COL)
    {

        switch (mv)
        {
        case 0:
            v = 0;
            break;

        case ROW - 1:
            v = -1;
            x = v;
            break;
        }

        switch (mh)
        {
        case 0:
            h = 0;
            inith = y = h;

            break;

        case COL - 1:
            h = -1;
            y = h;
            break;

        default:
            h = -1;
            inith = h;
            break;
        }
        stdarr[mv][mh] = 0;
        while (v <= 1 + x)
        {

            while (h <= 1 + y)
            {

                stdarr[mv][mh] += ftdarr[mv + v][mh + h];
                h++;
            }
            h = inith;
            v++;
        }
        v = -1;
        printf("%d  ", stdarr[mv][mh]);
        mh++;
        if (mh == 4)
        {
            printf("\n");
            mh = 0;
            mv++;
        }
    }
}
