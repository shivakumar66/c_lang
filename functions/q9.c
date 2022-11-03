#include<stdio.h>

int main()
{
	int mat[10][10],trans[10][10],row,col;;
	printf("enter the values of rows :");

	scanf("%d",&row);
	printf("enter the number of columns :");
	scanf("%d",&col);

	printf("enter the elements of the matrix :\n");
	for(int i=0; i<row;i++){
	for(int j=0;j<col;j++)
	{
                printf("enter elements m  [%d,%d] ",i+1,j+1);   
		scanf("%d",&mat[i][j]);
        
	}
	}


          printf("\nmatrix is :\n");
	for(int i=0;i<row;i++)
	{
          for(int j;j<col;j++)
	     {

	
	printf("%d\t",mat[i][j]);
	
            if(j==row-1){
		printf("\n");
	
	}
	}
	}
	return 0;
}

