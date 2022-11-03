#include<stdio.h>
int main()
{

	int c[10];
	int i,a;
	printf("enter the array size");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<=a;i++){
		printf("%d",c[i]);
	}
        for(i=a;i>=0;i--)
	{
		printf("the reverse of array is%d\t",c[i]);
	}
}
