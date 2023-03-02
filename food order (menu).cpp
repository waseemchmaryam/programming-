#include<iostream>
using namespace std;
void displaymenu( );
void take_order( );
int main()
{
int press;
cout<<" would u dislay the menu to pRESS 10 "<<endl;
cin>>press;
if(press==10)
{cout<<"Dislay menu "<<endl;
	displaymenu( );
}
	else
{
		cout<<"Wrong "<<endl;
		return 0;
}

	take_order();

	}
void displaymenu( )
{
	cout<<" Menu "<<endl;
	cout<<"A. Burger (Rs.500) "<<endl;
		cout<<"B. pizza (Rs.1000) "<<endl;
		cout<<"C. Sandwich (Rs.200) "<<endl;
		cout<<"D. White pasta  (Rs.700) "<<endl;
		cout<<"E. Nuggets 1 piece  (Rs.80) "<<endl;
		cout<<"F. French fries  (Rs.300) "<<endl;
		cout<<"G. Cofee  (Rs.850) "<<endl;		
}
void take_order( )
{
	int quantity;
	int charge;
	char order;
		cout<<"What would u like to order (A,B,C,D,E,F,G) ? "<<endl;
	cin>>order;
	cout<<"How much quantity do u want ? "<<endl;
	cin>>quantity;
	cout<<"You ordered "<<quantity<<" "<<order<<endl;
	switch(order)
	{
		case'A':
			charge=quantity*500;
			cout<<"Total charges (Burger) : "<<charge<<endl;
break;	
		case'B':
			charge=quantity*1000;
			cout<<"Total charges (pizza) : "<<charge<<endl;
break;	
	case'C':
			charge=quantity*200;
			cout<<"Total charges (sandwich) : "<<charge<<endl;
break;	
	case'D':
			charge=quantity*700;
			cout<<"Total charges (White pasta) : "<<charge<<endl;
break;	
	case'E':
			charge=quantity*80;
			cout<<"Total charges (Nuggets) : "<<charge<<endl;
break;	
	case'F':
			charge=quantity*300;
			cout<<"Total charges (French fries) : "<<charge<<endl;
break;	
	case'G':
			charge=quantity*850;
			cout<<"Total charges (Coffee) : "<<charge<<endl;
break;	
	default:
		cout<<" Sorry! Invalid order: "<<endl;
}
	
}
	
