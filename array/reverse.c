#include<stdio.h>
int main()
{

	int arr[9]={1,2,3,4,5,6,7,8,9};
        
	 for(int i=0;i<=8;i++){
		 printf("%d\t",arr[i]);
	 }
	 printf("\n");

	 for(int i=8;i>=0;i--)
	 {
		 printf("%d\t",arr[i]);
				 }
	 return 0;
}
