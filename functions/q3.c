#include<stdio.h>
void swap(int *x ,int *y);
int main()
{
	int a,b;
	printf("enter the value of a =");
	scanf("%d",&a);
	printf("enter the value of b =");
	scanf("%d",&b);
	swap(&a,&b);
	printf("the swapped values of a & b are %d %d :",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

