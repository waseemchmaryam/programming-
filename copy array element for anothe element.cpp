#include<iostream>
using namespace std;
main()
{
	int n,a[10],b[10];//size a[i],b[j](a[i]=b[j])
	for(int i=0;i<10;i++)//used loop
	{
		cout<<"Enter the numbers: "<<i+1<<endl;//enter the nos (10 times)  
		cin>>a[i];
	}int j=0;// neat and clean (not garbage value enterd )
	cout<<"Array after coying elment to another elemnt: ";
	for(int i=0;i<10;i++)
	{
		b[i]=a[j];//copy element to anothe element
j++;
	
	}for(int i=0;i<10;i++)
	{
	
		cout<<b[i]<<endl;
		}
	return 0;

	
}
