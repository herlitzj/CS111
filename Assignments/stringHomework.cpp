#include <iostream>
using namespace std;

string identifyChar(char inputChar) {
	if(inputChar >= 'a' && inputChar <= 'z') return "lowerCase";
	if(inputChar >= 'A' && inputChar <= 'Z') return "upperCase";
	return "notLetter";
} 

string toUpperCase(string inputString) {
	string returnString = inputString;
	int toUpper = 'a' - 'A';
	for(int i = 0; i < inputString.length(); i++) {
		if(identifyChar(inputString[i]) == "notLetter" || identifyChar(inputString[i]) == "upperCase") returnString[i] = inputString[i];
		else returnString[i] = inputString[i] - toUpper;
	}
	return returnString;

}

string toLowerCase(string inputString) {
	string returnString = inputString;
	int toLower = 'a' - 'A';
	for(int i = 0; i < inputString.length(); i++) {
		if(identifyChar(inputString[i]) == "notLetter" || identifyChar(inputString[i]) == "lowerCase") returnString[i] = inputString[i];
		else returnString[i] = inputString[i] + toLower;
	}
	return returnString;

}

bool areStringsEqual(string strOne, string strTwo) {
	if(strOne == strTwo) return true;
	return false;
}

string getStringFromUser() {
	string finalString;
	cout << "Please type a string of less than 100 characters, then press enter..." << endl;
	std::getline(std::cin, finalString);
	if(finalString.length() > 99) {
		cout << "The input string is greater than 100 characters." << endl;
		finalString = getStringFromUser();
	}
	return finalString;
}

int main(){
	string stringOne = getStringFromUser(), stringTwo = getStringFromUser();

	cout << toUpperCase(stringOne) << endl;
	cout << toLowerCase(stringOne) << endl;
	if(areStringsEqual(stringOne, stringTwo)) cout << "The two strings are equal." << endl;
	else cout << "The two strings are not equal" << endl;

	return 0;

}
