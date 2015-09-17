#include <iostream>
using namespace std;

int main() {
	int quarters, dimes, nickles, cents = 0;

	cout << "How much money do you have in change? ";
	cin >> cents;
	
	if (cents < 0) {
		cout << "Please enter a valid positive number." << endl;
		return 0;
	} else {	

		quarters = cents/25;
		dimes = (cents-quarters*25)/10;
		nickles = (cents-quarters*25-dimes*10)/5;
		cents = (cents-quarters*25-dimes*10-nickles*5);
		
		cout << "Quarters : " << quarters << endl;
		cout << "Dimes : " << dimes << endl;
		cout << "Nickles : " << nickles << endl;
		cout << "Cents : " << cents << endl;
	}



	return 0;

}
