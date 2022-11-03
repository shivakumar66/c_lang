#include<stdio.h>
char c;
int main()
{
	
	printf("the lower case alphabets are \n");
         for(c='a';c>='a' && c<='z';c++){
		 printf("the ascii value is %d=%c \n",c,c);
	 }
	 printf("the ascii values of upper case alphabets are \n");
	 for(c='A';c>='A' && c<='Z';c++){
		  printf("the ascii value is %d=%c\n",c,c);
	 }
	 printf("the ascii values of the digits (1-9) are \n");
	 for(c='1';c>='1' && c<='9';c++){
		  printf("the ascii value is %d=%c\n",c,c);
	 }
	 return 0;
}
