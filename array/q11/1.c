#include<stdio.h>
int main()
{
	int i,j;

	int arr[5];
	int arr1[5];
	int arr2[10];


	//input arr1
	printf("enter the elements of the array1 :");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}

	//output
        printf("the enterd elements are arr[] :");
	for(i=0;i<5;i++)
        {
                  printf("%d ",arr[i]);
        }

	printf("\n");

	//input arr2
	printf("enter the elements of the array2 :");
        for(i=0;i<5;i++)
        {
        	scanf("%d",&arr1[i]);
        }
	//output
        printf("the enterd elements are arr1[] :");
        for(i=0;i<5;i++)
        {
       		printf("%d ",arr1[i]);
        }
	
	// cOPY arr1 to FinalArray     
        for(i=0;i<5;i++)
        {
		arr2[i]=arr[i];
	}

	//output
/*	printf("the enterd elements are :");
        for(i=0;i<5;i++)
        {
                printf("%d ",arr2[i]);
        }
	*/


	// copy arr1 to arr2
	for(i=5;i<10;i++)
	{
		for(j=(i-5);j==(i-5);j++)
                {
			arr2[i]=arr1[j];
		}
	}

	printf("\n");

	//output
	printf("After concatination arr2[] : ");
	for(j=0;j<10;j++)
        {
		printf("%d ",arr2[j]);

	}
	printf("\n");
	
}

