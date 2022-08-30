#include <stdio.h>
#include <math.h>
#define ROW 4
#define COL 4

int main(int argc, char const *argv[])
{

    int Aarr[ROW][COL] = {{4, 7, 1, 2}, {2, 3, 5, 7}, {8, 2, 1, 1}, {3, 6, 5, 6}};
    int temp = 2147483646, v, h, res;


    for (v = 0; v < ROW; v++)
    {
        for (h = 0; h < COL; h++)
        {
            // printf("%d", Aarr[v][h]);
            if (Aarr[v][h] <= temp)
            {
                temp = Aarr[v][h];
                res = h;
            }
        }

       
        // if (res != 0) printf("temp = %d,  = %d , v = %d \n", temp, res,v);

        //? befor jump row do this :
        h = 0;
        for (int i = 0; i < COL - res + v; i++)
        {
            temp = Aarr[v][COL - 1];
            for (size_t i = COL; i > 0; i--)
            {
                Aarr[v][i-1 ] = Aarr[v][i - 2];
            }
            Aarr[v][0] = temp;
        }
        res = 0,temp=2147483646; // !on finish

    }

    int rcount=0;
    //print mat :
       for (size_t i = 0; i < ROW * COL; i++)
    {
        if (i != 0 && i % COL == 0) //! on row jump
        {
            printf("\n");
            rcount++;
        }
       printf("%d ",Aarr[rcount ][i - (rcount * 4)]);
    }
     printf("\n");
    return 0;
}
