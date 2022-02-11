// SalaryCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{ 

	//read in variables for calculating hourly wage
	double annualSalary, hoursperYear, hourlyRate;
	//read in for calculating annual salary
	double weekWage, hourWage, hoursWorked, yearSalary, weeksWorked;
	// create int for if else 
	int variable;

	std::cout << "Press 1 to find your hourly wage for annual salary. Press 2 to find your annual salary for your hourly wage: ";
	std::cin >> variable;
	if  (variable == 1)
	{
		//prompt for annual salary
		std::cout << "Enter your annual salary: ";
		std:cin >> annualSalary;

		//prompt for how many hours they work in a year (average 40 hour work week for 52 weeks is 2,080)
		std::cout << "Enter how many hours in a year you work (I know you dont know that off-hand, the average 40 hour work week for 52 weeks is 2080 hours per year, dont put in a comma): ";
		std::cin >> hoursperYear;

		//divide your annual salary by hours
		hourlyRate = annualSalary / hoursperYear;

		std::cout << "Your hourly rate is: " << hourlyRate;
	}

	else
		{ 
				
		// prompt user for their hourly wage
		std::cout << "Enter what you get paid hourly: ";
		std::cin >> hourWage;
		std::cout << "Enter how many hours you generally work in a week: ";
		std::cin >> hoursWorked; 
		std::cout << "Enter how many weeks you work in a year (there are 52 weeks in a year): ";
		std::cin >> weeksWorked;

		// multiply the hourly wage by number of hours worked
		weekWage = hourWage * hoursWorked;

		// multiply weekWage by total number of weeks per year
		yearSalary = weekWage * weeksWorked;

		// output salary
		std::cout << "Your yearly salary is: " << yearSalary;

		return 0;
		}
}
