#include<stdio.h>
 void main()
{
	char ch;

	printf("enter a alfabet");
		scanf("%c",&ch);
	switch(ch)
	{
	  case 'a':
			
	 printf("A for Apple");
		break;
       	
	case 'A':
	       printf("A for Apple");
	       break;
	case 'b' :
			
	       printf("B for ball");
	       break;
	case 'B':

		printf("B for Ball");
		break;
        case 'd' :
		printf("D for Dog");
		break ;
				
	case 'D' :
			
		printf("d for Dog");
		break ;
	case 'f' :
	        printf("F for Fan");
		break;
		
		
	case 'F' :
               printf("F for fan");
		
	default :
	       printf("character not in a range : \n");
				
}
}

