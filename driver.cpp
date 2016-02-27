//Name: Mavey Ma
//Created: Friday, February 26, 2016
/* Problem 3.16 "Making a Difference." (Target-Heart Rate Calculator)

Write an application that prompts for the person’s information, instantiates an object of class HeartRates and prints the information from that object—including the person’s first name, last name and date of birth—then calculates and prints the person’s age in (years), maximum heart rate and target-heart-rate range.
*/
#include "HeartRates.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string first, last;
	int yourBirthday[3];
	int age;
	cout << "Enter first name: ";
	cin >> first;
	cout << "Enter last name: ";
	cin >> last;
	HeartRates fafa(first, last);
	cout << "Let's calculate your age." << endl;
	age = fafa.getAge();
	cout << "*************************************" << endl;
	cout << "Name: " << first << " " << last << endl;
	fafa.getBirthday();
	cout << "Age: " << age << endl;
	cout << "Max Heart Rate: " << fafa.getMaximumHeartRate(age) << " beats per minute." << endl;
	fafa.getTargetHeartRate(age);
	return 0;
}//END MAIN
