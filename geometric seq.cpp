#include<iostream>
using namespace std;
int geometric_seq(int r,int a,int n);
main()
{
	int a=3;
	int r=2;int n;
	cout<<"?ENTER THE TERMS WHICH YOU WANT TO KNOW FROM THIS SEQUENCE {3,6,12,24,48,......} "<<endl;
	cin>>n;
	cout<<"The"<<n<<"term in the geomettric seq are : "<<geometric_seq(r,a,n);
	
	cout<<endl;
	
}
int geometric_seq(int r,int a,int n)
{
	
	if(n==1)
	{
	
	return a;
}
	else
	
	return r*geometric_seq(r,a,n-1);
	}
