#include<stdio.h>
int n,s[10];
int itob(int n ,int s[10]);
int itoh(int n,int s[10]);
void main()
{
	printf("enter a number :");
	scanf("%d",&n);
	itob(n,s);
	itoh(n,s);
}
int itob(int n,int s[10])
{       
        int i;
        for(i=0;n>0;i++)
        {       
                s[i]=n%2;
                n=n/2;
        }       int itob(int n,int s[10])
{       
        int i;
        for(i=0;n>0;i++)
        {       
                s[i]=n%2;
                n=n/2;
        }       
        printf("the binary representation is =");
        for(i=i-1;i>=0;i--)
        {       
                printf("%d",s[i]);
        }       
        printf("\n");
        return 0;
}       

        printf("the binary representation is =");
        for(i=i-1;i>=0;i--)
        {       
                printf("%d",s[i]);
        }       
        printf("\n");
        return 0;
}       
int itoh(int n,int s[10])
{       
        int i;
        for(i=0;n>0;i++)
        {       
                s[i]=n%16;
                n=n/16;
        }       
        printf("the hexagonal representation is =");
        for(i=i-1;i>=0;i--)
        {       
                printf("%d",s[i]);
        }       
        printf("\n in hexagonal we represent 10=A , 11=B , 12=C , 13=D , 14=E, 15=F \n");
        return 0;
}       
	
