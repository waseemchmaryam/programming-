#include<iostream>
using namespace std;
main()
{
	 int mat1[3][3], mat2[3][3], i, j, res[3][3];
	 cout<<"Enter the no of elment in 1st matrix : "<<endl;//just write not any meaning 
    for(i=0; i<3; i++)//no of rows
    {
        for(j=0; j<3; j++)//no of columns
         {cout<<"Enetr the number:["<<i<<"]["<<j<<"]";//[0][0]
        
			   cin>>mat1[i][j];//enter the value of [0][0]=12
    }}
    cout<<"First matrix is: "<<endl;
      for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         {cout<<mat1[i][j]<<" ";//print nos [12 32 45] 
		 }
		 cout<<endl;} 
    cout<<"Ente rthe no of element : "<<endl;//same procedure for matrix 1
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
        	cout<<"Enter the no:["<<i<<"]["<<j<<"]";
            cin>>mat2[i][j];
    }}
     cout<<"Second  matrix is: "<<endl;
      for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         {cout<<mat2[i][j]<<" ";
		 }
		 cout<<endl;} 
    cout<<"ADDition: "<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            res[i][j] = mat1[i][j]+mat2[i][j];//add matrices
    }
    cout<<"Addition Result of Two Given  matrices "<<endl; 
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<res[i][j]<<" ";//print the  sum of result
        cout<<endl;
    }
    return 0;
}

