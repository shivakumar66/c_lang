#include<stdio.h>
#include<std.lib>
void main()
{
	FILE*fp1=fopen("file.txt","r"):
	char c;
	if(fp1 == NULL)
        {
	printf("file not found");
	exit(0);
        }
        c=fgetc(fp1);
        while ((c = fgetc(fp1)) != EOF)
        {
	printf("%c",c);
        }
        fclose(fp1);
  }

