#include<stdio.h>
void large(int arr[],int n);//function declaration
int main()
{
        int s[20];
        int m,i;
        printf("enter the array size :");
        scanf("%d",&m);
	//reading the inputs from user
        printf("enter the array elements  :");
        for(i=0;i<m;i++)
        {
                scanf("%d",&s[i]);
        }
	//printing the output
         printf(" the array elements  :");
        for(i=0;i<m;i++)
        {
                printf("%d",s[i]);
        }
        large(s,m);//function calling
        return 0;
}
   void large(int arr[],int n)   //function defination
{
        int i,g;
           g=arr[0];  //assigning largest elements
        for(i=0;i<n;i++)
        {
                if(arr[i]>g)
                        g=arr[i];

        }
        printf("\nthe largest number is = %d ",g);
}


