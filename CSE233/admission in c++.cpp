#include<iostream>
using namespace std;
class uni
{
	int rno;
		static int tad;
		public:
			void adm()
			{
				cout<<"\nEnter the registrastion number of the new student:"<<endl;
				cin>>rno;
					tad=tad+1;
						cout<<"\n total admission:"<<tad;
			}
};
  int uni::tad;
  	main()
  	{
  		uni a1,a2,a3,a4,a5;
  			a1.adm();
  			a2.adm();
  			a3.adm();
  			a4.adm();
  			a5.adm();
	  }
