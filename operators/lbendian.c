#include<stdio.h>
void e(char *var,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %.x",var[i]);
	}
}
void main()
{
	int num=0x12345655;
	e((char*)&num,sizeof(num));
}
