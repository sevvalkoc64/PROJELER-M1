#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi3D[2][5][3];
   int i,j,k;
   int sayac=1;

   for(j=0;j<5;j++)
   {
       for(k=0;k<3;k++)
       {
           for(i=0;i<2;i++)
           {
               dizi3D[i][j][k]=sayac;
               sayac++;
               printf("[%d][%d][%d]:%2d   ", i,j,k, dizi3D[i][j][k]);
           }
           printf("\t\t");
       }
       printf("\n");
   }

    return 0;
}
