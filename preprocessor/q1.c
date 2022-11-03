#include<stdio.h>
#define FACTORIAL(n) for(i=1;i<=n;i++)\
				f=f*i;\
				printf("\nfact=%d",f);
void main()
{
  int i,n,f=1;
  printf("enter a number=");
  scanf("%d",&n);
  FACTORIAL(n);
}


