#include<stdio.h>
#include<string.h>
#define N 100

int sum( int array[],int length)
{
 int i, k = 0;
 for (i = 0; i < length; i++)
 {
    k = 10 * k + array[i];
 }
  return k;
}
int main()
{
    int num[N], a[200];
    int temp;
    int i, n, j, k=0;
    printf("\nHow many number you want to enter: ");
        scanf("%d", &n);
    for (i = 0 ; i < n; i++)
        num[i]=i+1;
    for (j = 1; j <= n; j++)
    {
        for (i = 0; i < n-1; i++)
        {
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
            a[k]=sum(num,n);
            k++;
	       }
    }
    int nmax, p;
    for(i=0;i<k-1;i++)
    {
        nmax = i;
        for(j=i+1;j<k;j++)
        {
         if(a[j]<a[nmax])
         {
         nmax = j;
         p = a[i];
         a[i] = a[nmax];
         a[nmax] = p;
         }
        }
    }
    for(i=0;i<k;i++)
    printf("%d\n",a[i]);
    return 0;
}
