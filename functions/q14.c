#include<stdio.h>
int gcd(int u , int v);
int main()
{
	int x,y;
	printf("enter the value of x");
	scanf("%d",&x);
	printf("enter the value of y");
	scanf("%d",&y);
	printf("the gcd of the numbers is %d ",gcd(x,y));
return 0;
}
int gcd(int u,int v){
	int temp;
	while(v!=0)
	{
		temp=u%v;
		u=v;
		v=temp;
	}
	return u;
}

