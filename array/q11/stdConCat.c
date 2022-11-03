#include<stdio.h>
int main()
{
	int i,j,size1,size2, FinalSize;

	printf("Enter the size of array1 :");
	scanf("%d", &size1);
	printf("Enter the size of array2 :");
	scanf("%d", &size2);

	FinalSize = size1 + size2;

	int arr[size1];
	int arr1[size2];
	int arr2[FinalSize];


	//input arr1
	printf("enter the elements of the array1 :");
	for(i=0;i<size1;i++)
	{
	scanf("%d",&arr[i]);
	}

	//output
        printf("the enterd elements are arr[] :");
	for(i=0;i<size1;i++)
        {
                  printf("%d ",arr[i]);
        }

	printf("\n");

	//input arr2
	printf("enter the elements of the array2 :");
        for(i=0;i<size2;i++)
        {
        	scanf("%d",&arr1[i]);
        }
	//output
        printf("the enterd elements are arr1[] :");
        for(i=0;i<size2;i++)
        {
       		printf("%d ",arr1[i]);
        }
	
	// cOPY arr1 to FinalArray     
        for(i=0;i<size1;i++)
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
	for(i=size1;i<FinalSize;i++)
	{
		for(j=(i-size1);j==(i-size1);j++)
                {
			arr2[i]=arr1[j];
		}
	}

	printf("\n");

	//output
	printf("After concatination arr2[] : ");
	for(j=0;j<FinalSize;j++)
        {
		printf("%d ",arr2[j]);

	}
	printf("\n");
	
}

