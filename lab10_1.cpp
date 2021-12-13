#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double Money,Pay,Interest,Total,NewBalance;

	
	cout << "Enter initial loan: ";
	cin >> Money;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest;
	cout << "Enter amount you can pay per year: ";
	cin >> Pay;
	NewBalance = Money;  //กำหนดให้ money เท่ากับ Newbalance


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	for (int x = 1;Money > 0; x++)
	{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << x; 
	cout << setw(13) << left << Money;	
	cout << setw(13) << left << Money*Interest/100;	
	
	// กำหนดให้
	Total = NewBalance + Money*Interest/100;
	NewBalance = Total - Pay;
	cout << setw(13) << left << Total;
	if (Pay> Money + Money*Interest/100)
	{
	cout << setw(13) << left << Total;
	cout << setw(13) << left << 0.0;
	break;		
	}
	
	else
	{
		cout << setw(13) << left << Pay;
		cout << setw(13) << left << NewBalance;
	
	}
	cout << "\n";

	Money = NewBalance;
	}
	
	return 0;
}
