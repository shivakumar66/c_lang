#include<stdio.h>
long fact( int t);
int main()
{
	int p,i;
	double add1=0,add=0;
	for(i=1;i<=7;i++)
	{
		char ch;
		scanf("%c",&ch);
		switch(ch)
			{
		case '-':

			add-=i/(float)fact(i);
		
		case '+':
		
			add1+=i/(float)fact(i);
		}
	}
	printf("the addition of series is %lf",add1+add);
}
long fact(int t)
{
	if(t==0 || t==1)
	{
		return 1;
	}
	else return t *fact(t-1);
}
