#include<iostream>
using namespace std;
main()
{
	int n,i,Repeat[n];
	cout<<"Enter the no of element : "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{cout<<"Enter the no "<<i+1<<endl;
	cin>>Repeat[i];
}


	cout<<"Reeating nos are: ";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(Repeat[i]==Repeat[j])
			{
			

					cout<<Repeat[j]<<"  "<<endl;
	}
		}	}
		return 0;}
		
	

