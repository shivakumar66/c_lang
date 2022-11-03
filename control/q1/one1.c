#include<stdio.h>
int i,j;
int main()
	
{
      printf("enter the values of i and j : ");
      scanf("%d,%d",&i,&j);
      if (i==20 || j==20){
	      printf("atleast one variable having 20 \n");
      }
      else{
	      printf("both variables not having 20 \n");
         
      }
      if (i<=40 & j<=40){
	      printf("both are lessthan or equals to 40\n");
      }
      else{
	      printf("both are not lessthan or equals to 40 \n");
      }
}
