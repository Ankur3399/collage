#include<iostream>
using namespace std;
int main()
{  
   int rem,n,rev;
   printf("enter the number:");
   scanf("%d",&n);
    while(n>0)
    {  rem=n%10;
       n=n/10;
       rev=rev*10+rem;
    
	}
	
	
	printf("given number in pelidrome: %d",rev);
	return 0;
}
