#include<iostream>
using namespace std;

main()
{  
   int num;
   cout<<"enter the number:";
   cin>>num;
   int n=num;
   int t,rev=0;
   while(num>0)
   { 
      t=num%10;
      rev=rev*10+t
      num=num/10;
      
   }
      if(n==rev
   { 
      cout<<"palidrome";
   }
   else
   {   
      cout<<"not a pelidrome";
   }
}
