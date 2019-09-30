#include<stdio.h>
int main()
{
    int t,n,i,min=10,k;
    printf("enter test case:\n");
    scanf("%d",&t);
    while(t--)
    {
     min=10;
     printf("enter size of array AND elements \n");
     scanf("%d%d",&n,&k);
     int a[n];
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
      if(a[i]<min)
       min=a[i];
     }
   
     if(min>=k)
      printf("0\n");
     else
      printf("%d\n",k-min);
    }
    return 0;

}

