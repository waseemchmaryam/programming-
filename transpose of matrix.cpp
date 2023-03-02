#include<iostream>
using namespace std;
main()
{int mat1[3][2],n,transpose[3][2];
cout<<"Enter the no of element: "<<endl;
for(int i=0;i<3;i++)
{
	for(int j=0;j<2;j++)
	{
		cout<<"Enter the number: ["<<i<<"]["<<j<<"]";
		cin>>mat1[i][j];
	}
}
cout<<"First matrix :"<<endl;
for(int i=0;i<3;i++)
{
	for(int j=0;j<2;j++)
	{
		cout<<mat1[i][j]<<" ";
	}
	cout<<endl;
}
cout<<"Transose of matrix:"<<endl;
for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
	{
transpose[i][j]=mat1[j][i];

cout<<transpose[i][j]<<" ";

}
	cout<<endl;}

return 0;}


