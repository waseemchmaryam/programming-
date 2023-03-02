#include<iostream>
using namespace std;
main()
{
	float t1,t2,t3;
	cout<<"Enter the triangle sides =  "<<endl;
	cin>>t1>>t2>>t3;
	if(t1+t2+t3==180)
	{
	
	cout<<t1<<"+"<<t2<<"+"<<t3<<"="<<180<<(t1+t2+t3==180)<<endl;
	cout<<"Valid triangle "<<endl;
}
else
	cout<<"invalid triangle "<<endl;
return(0);
}


