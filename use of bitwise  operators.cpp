#include<iostream>
using namespace std;
main()
{
	int n1=79,n2=123;
	cout<<"Use of bitwise operators\n";
	n1&n2;
	cout<<endl<<n1<<"&"<<n2<<"="<<(n1&n2)<<endl;
	n1|n2;
	cout<<n1<<"|"<<n2<<"="<<(n1|n2)<<endl;
	n1^n2;
	cout<<n1<<"^"<<n2<<"="<<(n1^n2)<<endl;
	~n1;
	cout<<"~"<<n1<<"="<<(~n1)<<endl;
	cout<<"Applying shift left"<<endl;
	n1<<3;
	cout<<"<<"<<n1<<"="<<(n1<<3)<<endl;
	cout<<"Applying shift right"<<endl;
	n1>>3;
	cout<<">>"<<n1<<"="<<(n1>>3)<<endl;

	return(0);
}
	

