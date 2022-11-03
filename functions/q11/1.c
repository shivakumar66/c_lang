#include<stdio.h>
void xindex(int *s,int n,int t);
int main()
{
	int ar[10];
	int n,t,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
          printf("entered array  elements are :");
        for(i=0;i<=n;i++)
        {       
                printf("%d",ar[i]);
        }               
            printf("enter the number to be search :");
	    scanf("%d",&t);
	    xindex(ar,n,t);

	    return 0;
}
void xindex(int *s,int n,int t)
{
int i;
i=n;
while(i>=0)
{
	if(s[i]==t)
	{
		printf("the right most bit is %d\n",i);
		break;
	}


	
	
i--;
}

 printf("enterd number is not available in the array:");

}
