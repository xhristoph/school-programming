// Chris Steinmetz  csteinmetz@cnm.edu 
//Program 1 - Traffic Cones  

#include <iostream>  // To use cout, cin
#include <cmath>  // To use pow()
#include <string> // To use getline()

using namespace std;

#define PI 3.14159265359  //tells what the value of PI is throughout int main(). Does not need a datatype specified

int main()
{
	//Declare Constants with values, declare Variables
	const double coneHeight = 28;
	const double baseSide = 16;
	const double baseThickness = 1;
	const double outerRadius = 6;
	const double innerRadius = 5;
	double coneVolume, coneVolumeInside, coneVolumeOutside, baseVolume;
	double coneQty, coneVolumeGallons;
	string name;

	//The calculations needed to output the correct values of the questions being asked
	coneVolumeInside = (PI * pow(innerRadius, 2) * coneHeight)/3;
	coneVolumeOutside = (PI * pow(outerRadius, 2) * coneHeight)/3; 
	baseVolume = (pow(baseSide, 2) * baseThickness); //volume of plastic used in base
	coneVolume = (coneVolumeOutside - coneVolumeInside + baseVolume); //total volume of plastic in cubic inches
	coneVolumeGallons = coneVolume/231; //converts the volume in cubic inches to gallons
	
		
	//Write Header
	cout.precision(2); //sets the output from the numbers and math to use 2 decimal places
	cout.setf(ios::fixed|ios::showpoint); //tells output to show the decimal point so it does not show exponential values
	cout << "\n\nChris Steinmetz, Traffic Cones"
		 << "\nUsing cin, cout, precision and math.\n\n"
		 << "This program will calculate\n"
		 << "the volume of plastic needed\n"
		 << "to produce the given amount of\n"
		 << "cones in cubic inches and in \ngallons.\n\n\n";
		 
		 //Gather input from user
	cout << "What is your name?";
	getline(cin, name); //uses cin to obtain the value of the variable 'name' - does not ignore white space, gets entire string of text even with spaces.

	cout << "\Thank you,  " << name << ".\nPlease enter the amount of cones you'd like:";

	cin >> coneQty; 
		 
	//Output 
	cout << "\n\nYou have entered " << coneQty << " cone(s).\n\n"
			<< "Each cone has a base of " << baseSide << " inches squared by " << baseThickness << "\nand is " << coneHeight << " inches high."
			<< "\nThe outer volume of each cone is: " << coneVolumeOutside << " inches cubed."
			<< "\nThe inner volume of each cone is: " << coneVolumeInside << " inches cubed."
			<< "\n\nThe total volume of plastic needed for the quantity " << coneQty << " is: "
			<< "\n\nCubic Inches: " << coneVolume * coneQty  
			<< "\nGallons: " << coneVolumeGallons * coneQty;
		
	//Goodbye message
	cout << "\n\n\nI hope this information was useful, " << name << ".\nUntil next time...\n\n\n"
		    << "For now, ";

	return 0;
}