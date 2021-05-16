#include <iostream>
#include <string>
using namespace std;

int main()
{
	string cityName, stateName, zipCode;

	while (true)
	{
		cout << "Enter city (blank to finish): ";

		//getline will find the entered value and assign it to the correct string
		getline(cin, cityName);

		//cityName is the sentinal value, if left blank will close the program
		if (cityName == "") return 0;
		
		cout << "Enter state: ";

		getline(cin, stateName);

		cout << "Enter zip code: ";

		getline(cin, zipCode);

		cout << cityName + ", " + stateName + " " + zipCode << endl;
	}
}