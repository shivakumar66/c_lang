#include<stdio.h>
int rotate_right(int a,int b);
int main(){
	int a,b;
	printf("enter a number to rotate :");
	scanf("%d",&a);
	printf("enter the position :");
	scanf("%d",&b);
	printf("the value of %d,after right rotation by %d position is %d",a,b,rotate_right(a,b));
	return 0;
}
int rotate_right(int a,int b)
	
{
	return (a>>b) | (a<<b);
}

