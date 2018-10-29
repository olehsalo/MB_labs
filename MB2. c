#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define MAX 40


//function prototype

int Difference(double setA[MAX],int sizeA,double setB[MAX],int sizeB,double setC[MAX]);
void displaydata(int size,double set[MAX]);
void printPowerSet(double setC[MAX], int sizeC);
int main()
{
    double setB[MAX]={0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1};
    int sizeB=11;
    double setA[MAX],x;
    int sizeA,i;

    printf("enter the length of the array(from 7 to 10):\n");
    scanf("%d",&sizeA);
    if(sizeA>10||sizeA<6)
    {
        printf("enter the length of the array(from 7 to 10):\n");
        scanf("%d",&sizeA);
    }
    for(i=0;i<sizeA;i++)
    {
        printf("input unique real number from 0 to 1 aliquot 0.1:\n");
        scanf("%lf",&x);
        setA[i]=x;
        if(x>1||x<0)
        {
             printf("input unique real number from 0 to 1 aliquot 0.1:\n");
             scanf("%lf",&x);
        }
    }
    double setC[MAX];
    int sizeC;

    printf("\nThe complementation of setA is:\n");
    sizeC=Difference(setB,sizeB,setA,sizeA,setC);
    displaydata(sizeC,setC);
    printf("\n");

    printf("the size of the complementation of setA is:%d\n",sizeC);
    printf("\n");
    printf("{");

    printPowerSet(setC,sizeC);
}
void displaydata(int size,double set[MAX])
{
   int i;
   for(i=0;i<size;i++)
   printf("%lf\n",set[i]);

}
int Difference(double setA[MAX],int sizeA,double setB[MAX],int sizeB,double setC[MAX])
{
  int i,j,k=0;
  for(i=0;i<sizeA;i++)
  {
     for(j=0;j<sizeB;j++)
     {
       if(setB[j]==setA[i])
        {
            break;
        }
        }
     if(j==sizeB)
     {
       setC[k++]=setA[i];
  }
  }
  return(k);
}
void printPowerSet(double setC[MAX], int sizeC)
{
    sizeC = pow(2, sizeC);
    int i, j;

    for(i = 0; i < sizeC; i++)
    {
      for(j = 0; j < sizeC; j++)
       {
            if(i & (1<<j))
            printf(" %lf ", setC[j]);
       }
       printf("}{");
    }
}
