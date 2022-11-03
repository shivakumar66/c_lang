#include<stdio.h>
int main()
{
	int arr[20];
	int i,count =0;
	printf("enter array elements");
	for(i=0;i<=20;i++)
	{

	scanf("%d",&arr[i]);
	}
	 printf("entered  array elements are ");
        for(i=0;i<=20;i++)
        {
                count++;
        printf("%d",arr[i]);
	}

	printf("\nnumber of integers are to be stored are %d",count);
	return 0;
}

