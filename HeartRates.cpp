//Name: Mavey Ma
//Created: Friday, February 26, 2016
//Implementation file for HeartRates Class
#include "HeartRates.h"
#include<iostream>
#include<string>
using namespace std;

HeartRates::HeartRates(string firstName, string lastName)
{
	this -> firstName = firstName;
	this -> lastName = lastName;
}//END OVERLOADED CONSTRUCTOR

int HeartRates::getAge()
{
	int age = 0;
	cout << "Enter your birthday (MM DD YYYY): ";
	cin >> birthday[0] >> birthday[1] >> birthday[2];

	cout << "Enter today's date (MM DD YYYY): ";
	cin >> today[0] >> today[1] >> today[2];

	age = today[2] - birthday [2];
	if ( (today[0] < birthday[0]) || (today[1] < birthday[1]) )
	{
		age--;
	}
	return age;
}//END GET AGE

int HeartRates::getMaximumHeartRate(int yourAge)
{
	//Maximum heart rate = 220 - yourAge = beats per minute. 
	int beatsPerMinute = 0;
	beatsPerMinute = 220 - yourAge;
	return  beatsPerMinute;
}//END MAXIMUM HEART RATE

void HeartRates::getTargetHeartRate(int yourAge)
{
	//Target heart rate range that is [50%, 85%] of your maximum heart rate.
	int yourBPM = 0, lower, upper;
	yourBPM = getMaximumHeartRate(yourAge);
	lower = yourBPM * 0.50;
	upper = yourBPM * 0.85;
	cout << "Target Heart Rate Range: " << lower << " to " << upper << " beats per minute." << endl;
}//END TARGET HEART RATE
