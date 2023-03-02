#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n);
int main(int argc, char** argv) {
	int num,fact;
	cout<<"Enter the positive integer : "<<endl;
	cin>>num;
	if(num<0)
	cout<<"Its not positive integer : ";
	else
	{
		fact=factorial(num);
		int factorial (int n)
		{
			if(n<1)
			return 1;
			else
			int tem=n*factorail(n-1);
			return tem;
		}
	}
	
}
	
	
	
	
	
	
	
	return 0;
}
