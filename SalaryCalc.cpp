// SalaryCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{ 

		//read in wage values
		double weekWage, hourWage, hoursWorked, yearSalary, weeksWorked;
		// prompt user for their hourly wage
		std::cout << "Enter what you get paid hourly: ";
		std::cin >> hourWage;
		std::cout << "Enter how many hours you generally work in a week: ";
		std::cin >> hoursWorked; 
		std:cout << "Enter how many weeks you work in a year (there are 52 weeks in a year): ";
		std::cin >> weeksWorked;

		// multiply the hourly wage by number of hours worked
		weekWage = hourWage * hoursWorked;

		// multiply weekWage by total number of weeks per year
		yearSalary = weekWage * weeksWorked;

		// output salary
		std::cout << "Your yearly salary is: " << yearSalary;

		return 0;
}
