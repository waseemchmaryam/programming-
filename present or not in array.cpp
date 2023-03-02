#include<iostream>
using namespace std;
main()
{
	int i,n,arr[10];
	cout<<"Enter the no of element :  " <<endl;//5
	cin>>n;
	for(i=0;i<n;i++)//5 times  loop apply
	{cout<<"Enter the no  "<<i+1<<" "<<endl;//is pa hoga loop apply
	cin>>arr[i];
	}
	int found=0;
	cout<<"Check the no is present:? "<<endl;//exact print
	for(i=0;i<n;i++)//loop check krta rha ga 5 times hogya hain jb hojay ga to stop ho jay ga
{
	if(arr[i]==n)//condition check
	{
		found=1;
		break;//stop
	}}
	if (found)
	cout<<"present in array element ";
	else
	cout<<"not present in array element ";
		
	}

