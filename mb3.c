#include<stdio.h>
#define MAX 1000

int main()
{
    int setA[MAX], setB[MAX], setC[MAX][MAX], size;
    int i, j, a, b, k, sum=0;

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
        sum+=setC[i][i];
    }
    if(sum==size)
    {
        printf("matrix is reflexive\n");
    }
    else if(sum==0)
    {
        printf("matrix is anti-reflexive\n");
    }
    else
    {
        printf("matrix is non-reflexive\n");
    }
    for(i=0; i<size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if(setC[i][j]==setC[j][i])
            {
                if(i==size-1)
                {
                    printf("Matrix is symetric\n");
                    i+=100;
                    break;
                }
            }
            else if((setC[i][j]==1&&setC[j][i]==0)||(setC[j][i]==1&&setC[i][j]==0))
            {
                if(i==size-1)
                {
                    printf("Matrix is anti-symetric\n");
                    i+=100;
                    break;
                }
            }
            else
            {
                printf("Matrix is non-symetric\n");
            }
        }
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            for(k=0; k<size; k++)
            {
                if(setC[i][j]==setC[j][k]==1)
                {
                    if(setC[i][k]==1)
                    {
                        printf("Matrix is transitive\n");
                        i+=10;
                        j+=10;
                        k+=10;
                    }
                }
                else if (setC[i][j]==setC[j][k]==1)
                {
                    if (setC[i][k] == 0)
                    {
                            printf("Matrix is anti-transitive\n");
                            i += 10;
                            j += 10;
                            k += 10;
                    }
                }
                else
                {
                    printf("Matrix is Non-transitive \n");
                    i+=10;
                    j+=10;
                    k+=10;
                }
            }
        }
    }
    return 0;
}
