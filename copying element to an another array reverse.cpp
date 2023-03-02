#include<iostream>
using namespace std;
main()
{
	int n,i,a[10],b[10];
	for(i=0;i<10;i++){
	
	cout<<"Enter the no "<<i+1<<endl;
	cin>>a[i];}
	int j=0;
	cout<<"Copying th another elemrnt in array for reverse "<<endl;
	for(i=9;i>=0;i--)
	{
		b[i]=a[j];
		j++;
	}
for(i=0;i<10;i++){
	cout<<b[i]<<endl;}
	return 0;
}
