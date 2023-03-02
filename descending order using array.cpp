#include<iostream>
using namespace std;
main()
{
	int n,arr[n];
	cout<<"Enter the element : "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number which u want to descending order:  "<<i+1<<endl;
		cin>>arr[i];
	}
	cout<<"DESending order ";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
{int tem=arr[j];
arr[j]=arr[i];
arr[i]=tem;
}}}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<"  ";
}
		cout<<endl;}


