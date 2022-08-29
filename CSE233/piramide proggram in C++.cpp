#include<iostream>
using namespace std;
int main()
{
	int i,space,rows,j;
	cout<<"enter the number of rows";
	cin>>rows;
	for (i=1;i<+rows;i++)
	{ 
	  for(space=1;space<=rows-i;space++)
	  {cout<<"  ";
	  }
	  for(j=1;j<=i;j++){
	  
	  cout<<"  * ";
	  }
	  cout<<endl;
	}
	return 0;
}
