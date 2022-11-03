#include<stdio.h>
int main()
{
	 int day,month,year;
	int day1,month1,year1;
        int nod;
	 int d,m,y;
	printf("\nenter the date:");
	scanf("%d",&day);

	printf("\nenter month=");
	scanf("%d",&month);
	printf("\nenter the year=");
	scanf("%d",&year);
	  printf("\nenter the date:");
        scanf("%d",&day1);
        printf("\nenter month=");
        scanf("%d",&month1);
        printf("\nenter the year=");
        scanf("%d",&year1);

	
	
	
	 if(month>month1)
	{
		m=month-month1;
	}
	 if(month1>month)
	{
		m=month1-month;
	}
	if(day>day1)
        {
                d=day-day1;
        }
        if(day1>day)
        {
                d=day1-day;
        }

	 if(year>year1)
	{
		y=year-year1;
		printf("\n%u",y);
	}
	if(year1>year)
	{
		y=year1-year;
		printf("\n%u",y);
	}

    printf("%d,%d,%d",d,m,y);                                                                                           
	   printf("\n");
	nod=(365 * y) +( y/4 -y/100 + y/400) + d + (153*m+8)/5 ;

	printf("%d\n",nod);
	return 0;
}
