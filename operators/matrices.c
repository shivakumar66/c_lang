#include<stdio.h>
int main()
{
	int a[4][4],b[4][4],s[4][4],m[4][4],c[4][4],i,j;
	printf("enter the elements of the 4*4 matrix :\n\n");
	for(i=0;i<=3;i++)
	 for(j=0;j<=3;j++)
	 {
		 scanf("%d",&a[i][j]);
	 }
	printf("enter the elements of the second 4*4 matrix :\n\n");
        for(i=0;i<=3;i++)
         for(j=0;j<=3;j++)
         {
                 scanf("%d",&b[i][j]);
         }
            for(i=0;i<=3;i++)
         for(j=0;j<=3;j++)
         {      
                 s[i][j]=a[i][j]+b[i][j];
         }
	     for(i=0;i<=3;i++)
         for(j=0;j<=3;j++)
         {
                 m[i][j]=a[i][j]*b[i][j];
         }
	      for(i=0;i<=3;i++)
         for(j=0;j<=3;j++)
         {
                 c[i][j]=a[i][j]-b[i][j];
         }


	    printf("\nsum of the matrices :\n\n");
	    for(i=0;i<=3;i++)
	    {
         for(j=0;j<=3;j++)
         {
                 printf("%d",s[i][j]);
         }
	    printf("\n");
	    }
	    printf("\nmultiplication of the matrices :\n\n");
            for(i=0;i<=3;i++)
            {
         for(j=0;j<=3;j++)
         {
                 printf("%d",m[i][j]);
         }
            printf("\n");
            }
	    printf("\nsubstraction of the matrices :\n\n");
            for(i=0;i<=3;i++)
            {
         for(j=0;j<=3;j++)
         {
                 printf("%d",c[i][j]);
         }
            printf("\n");
            }


	    return 0;
}






