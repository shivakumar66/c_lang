#include<stdio.h>
#include<string.h>
char reverse(char ch[ ]);
int main()
	{
		char m[20];
		printf(" enter a string :");
		scanf("%[^\n]s",m);
		printf("the string is %s\n",m);
                reverse(m);
	//	printf(" the reversed string is %s :",reverse(m));
		return 0;
	}
char reverse(char *str)
{ 
	if(*str)
	{
		reverse(str+1);
/*	int temp, i=0;
	int j;
	unsigned long int len;
	len=strlen(ch);
        j=len;
	while(i<j)
	{
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
		i++;
		j--;
	}*/
	printf("%c",*str);
}
}

