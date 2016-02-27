//Name: Mavey Ma
//Created: Friday, February 26, 2016
//Header File for HeartRates Class

#ifndef HEARTRATES_H
#define HEARTRATES_H
#include<string>
#include<iostream>

class HeartRates
{
	private:
		std::string firstName;
		std::string lastName;
		int birthday[3];
		int today[3];
	public:
		HeartRates(std::string firstName, std::string lastName);

		std::string getFirstName() {return firstName;}
		std::string getLastName() {return lastName;}
		void getBirthday() {std::cout << "Birthday: " << birthday[0] << "/"
													  << birthday[1] << "/"
												   	  << birthday[2] << std::endl;}
		void getToday() {std::cout << "Today: " << today[0] << "/"
											    << today[1] << "/"
											    << today[2] << std::endl;}
		int getMM() {return birthday[0];}
		int getDD() {return birthday[1];}
		int getYYYY() {return birthday[2];}

		int getAge();
		int getMaximumHeartRate(int yourAge);
		void getTargetHeartRate(int yourAge);
};
#endif //HEARTRATES_H
