#include<stdio.h>
void main(){
	char c[10];
	int i;
	int n;
	printf("size of the name =");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%c",&c[i]);
		}
	for(i=0;i<=n;i++)
		{
			printf("%c",c[i]);
		}

	printf("\nthe size of array and name length is %d and %ld",n,sizeof(c));
	
     
}
