#include<stdio.h>
int main()
{
        int arr[10];
        int n,i,j;
        printf("enter the array range ");
        scanf("%d",&n);
        printf("enter the array elements ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
            printf("the array elements are :");
            for(i=0;i<n;i++)
            {
		    	if(arr[i]%2==0)
			{
				printf("\nthese number is even=%d",arr[i]);
			}
            }
	    	printf("\n");
	    for(i=0;i<n;i++)
            {
                        if(arr[i]%2!=0)
                        {
                                printf("\nthese number is odd=%d",arr[i]);
                        }
            }

            
           

           
}	   

