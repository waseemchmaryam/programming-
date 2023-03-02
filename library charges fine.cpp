# include<iostream>
using namespace std;
main()
{
int nod;
cout<<"Enter the no of days : "	<<endl;
cin>>nod;
if(nod>0&&nod<=7)
{
	cout<<"A library charge fine for late returned book"<<endl;
	cout<<" Your fine is 10 Rs "<<endl;
}
else if(nod>8&&nod<=14)	
{
	cout<<"A library charge fine for late returned book"<<endl;
cout<<" Your fine is 20 Rs "<<endl;}
else if(nod>15&&nod<=31)
{
		cout<<"A library charge fine for late returned book"<<endl;
cout<<"Your fine is 50 Rs. "<<endl;}
else if(nod>31)
cout<<"Your membership is cancell "<<endl;
		return (0);
}
