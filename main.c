#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//global degiskenler
int w=2, h=2;//w:genislik ve h:yukseklik

//fonksiyon prototipi
void dizi2Dyazdir(int dizi2D[h][w]);
void matrisToplam(int m1[h][w],int m2[h][w],int s[h][w]);




int main()
{

   int A[h][w];
   int B[h][w];
   int sonuc[h][w];
   int i,j;

   srand(time(NULL));
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           A[i][j]= rand()%40+1;
           B[i][j]=rand()%40+1;
       }
   }
   dizi2Dyazdir(A);
   printf("\n\n");
   dizi2Dyazdir(B);
   printf("\n\n");
   matrisToplam(A,B,sonuc);
   dizi2Dyazdir(sonuc);
    return 0;
}




void dizi2Dyazdir(int dizi2D[h][w])
{
    int i,j;

    for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           dizi2D[i][j]= rand()%40+1;
           printf("[%d][%d]:%d\t",i,j,dizi2D[i][j]);
       }
       printf("\n");
   }
   printf("\n------------\n");
}




void matrisToplam(int m1[h][w],int m2[h][w],int s[h][w])
{
   int i,j;
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
          s[i][j]=m1[i][j]+m2[i][j];
       }
   }
}
