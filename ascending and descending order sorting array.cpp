#include<iostream>
using namespace std;
main()
{
	int n1,n2,large[n1],small[n2];
	cout<<"Enter the element for desending : "<<endl;
	cin>>n1;
	cout<<"Enter the element for ascending  :  "<<endl;
	cin>>n2;
	for(int i=0;i<n1;i++)
	{
		cout<<"Enter the number which u want to  descending order:  "<<i+1<<endl;
		cin>>large[i];}
		for(int i=0;i<n2;i++)
		{
		cout<<"Enter the number which u want to ascending order:  "<<i+1<<endl;
		cin>>small[i];}
	cout<<"DESCENDING ORDER: "<<endl;
	for(int i=0;i<n1;i++)
{
		for(int j=i+1;j<n1;j++)
	{
			if(large[i]<large[j])
{
int tem=large[j];
large[j]=large[i];
large[i]=tem;
}
}}int i,j;
for(int i=0;i<n1;i++)
{
cout<<large[i]<<"  ";
cout<<endl;}
cout<<"AScending order: "<<endl;
	for(int i=0;i<(n2)-1;i++)
{
		for(int j=i+1;j<n2;j++)
		{
		if(small[i]>small[j])
{int tem=small[j];
small[j]=small[i];
small[i]=tem;
}}}
for(int i=0;i<n2;i++){
		cout<<small[i]<<"  ";
}		cout<<endl;}


