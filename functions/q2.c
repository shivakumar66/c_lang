#include<stdio.h>
long int fact(long int n);
        int main()
{
        long int n;
        printf("enter a number N :");
        scanf("%ld",&n);
        printf("the value of n=%ld is : %ld\n",n,fact(n));
        
        return 0;
}
long int fact(long int n)
{
        if(n==0 || n==1)

                return 1;

        else
                return n * fact(n-1);
}


