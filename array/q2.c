#include<stdio.h>
int main()
{
	char arr[80];
	int n,i;
        int c=0,d=0,b=0,t=0;
	printf("enter array size ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%c",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(arr[i]>='a' && arr[i]<='z')
		{
		c++;
	          }
	              else if(arr[i]>='0' && arr[i]<='9')
		         {
		              d++;
	                     }
                                else if(arr[i]= '_')
		                   {
		                       b++;
	                            }
                                else if(arr[i]='	')
	                                {
		                                 t++;
					}
	}
              printf("the number of  characters are %d",c);
              printf("the number of  digits are %d\n",d);	  
	  printf("the number of  blanks are %d\n",b);
             printf("the number of tabs are %d\n",t);
   return 0;	     
}



