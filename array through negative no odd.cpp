#include<iostream>
using namespace std;
main()
{
	int i,arr[5],even=0,odd=0,pos=0,neg=0,zer=0;
	cout<<"Enter the 5 nos  ";
	for(i=0;i<5;i++)
	cin>>arr[i];
	for(i=0;i<5;i++){
	
		 if(arr[i]%2==0)
		 
		 
		 {even++;
		 cout<<"Even no : "<<even<<endl;
		 }

else 
odd++;
 if(arr[i]<0)
pos++;
else if(arr[i]>0)
neg++;
else
zer++;
}	

cout<<"odd no : "<<odd<<endl;
cout<<"positive no : "<<pos<<endl;
cout<<"Negative no :  "<<neg<<endl;
cout<<"Zero nos : "<<zer<<endl;
return 0;}
