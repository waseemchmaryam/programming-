#include<iostream>
using namespace std;
int arth_seq(int a1,int d,int n);
main()
{
int a1=10,d=5,n;
cout<<" Enter the term which you want to equence {10,15,20,25,...} "<<endl;
cin>>n;
cout<<"THE "<<n<<" term in the airthematic sequence "<<arth_seq(a1,d,n)<<endl;
return 0;
}
int arth_seq(int a1,int d,int n)
{
if(n==1)
return a1;
	else
	{
		return a1+(n-1)*d;
	}
	
}

