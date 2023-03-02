#include<iostream>
using namespace std;
main()
{
	int arr[5],i,n,temp;
	cout<<"which u want to enter the no : "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Entr the no element : "<<endl;
	cin>>arr[i];	
	}

	
temp=arr[0];
arr[0]=arr[n-1];
arr[n-1]=temp;
	cout<<"After the swapping  "<<endl;
	for(i=0;i<n;i++)	
	cout<<arr[i]<<endl;
	return 0;
	
	
	
}
