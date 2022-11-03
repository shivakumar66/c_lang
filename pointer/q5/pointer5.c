#include<stdio.h>
#include<string.h>
int count;
void main()
{
	char *a;
    char* s[]={"we will teach you how to",
                   "Move a mountain",
               	"level a building",
		"erase the past",
		"make a million"
};
  int j=0,i,n;
   n=(sizeof s/sizeof(char *))-1;
      			while(j<n)
		{
			a=s[j];
				for(i=0;a[i]!='\0';i++)
				{
					if(a[i]=='e')

						count++;


				}
                                    j++;
		}
			printf("\nTotal numbers of 'e'=%d",count);
 }


