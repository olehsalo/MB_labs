#include<stdio.h>
#define MAX 40

int main()
{
    int setA[MAX], setB[MAX], setC[MAX][MAX], size;
    int i, j, a, b;

    printf("enter the length of sets (no bigger than 5):\n");
    scanf("%d",&size);
    if(size>5||size<1)
    {
        printf("enter the length of sets (no bigger than 5):\n");
        scanf("%d",&size);
    }
    for(i=0;i<size;i++)
    {
        printf("input a member of setA:\n");
        scanf("%d",&a);
        setA[i]=a;
    }
    printf("\n");

    for(i=0;i<size;i++)
    {
        printf("input a member of setB:\n");
        scanf("%d",&b);
        setB[i]=b;
    }
    printf("\n");

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
          a=setA[i];
          b=setB[j];
          if(2*a > 3*b)
          {
              setC[i][j]=1;
              printf("%d",setC[i][j]);
          }
          else
          {
              setC[i][j]=0;
              printf("%d",setC[i][j]);
          }

        }
        printf("\n");
    }
    return 0;
}
