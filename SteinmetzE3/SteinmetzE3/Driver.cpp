//Exercise 3 - Distance Converter Using if/else-if/else structures   - Actually...I used the switch method. Oops? or Okay?
//Chris Steinmetz - csteinmetz@cnm.edu - C++ Programming 1 -Fall 2013

#include <iostream>
#include <string>

using namespace std;

int main()
{

	int inches = 0;
	int feet = 0;
	int choice = 0;
	string returns = "yes"; //used for do - while loop to come back to the main menu


	do //start of loop
	{
	cout << "\n\nDistance Conversion"
			<< "\nPlease choose an option below (1-4)"
			<< "\n1. Convert a whole number of inches into feet and inches"
			<< "\n2. Convert feet and inches into decimal feet"
			<< "\n3. Convert feet and inches into inches"
			<< "\n4. Exit\n"
			<< "\nEnter your choice: ";
	cin >> choice;
	

		switch(choice) //start of conditionals within the loop
		{
		case 1:	
			cout << "\nPlease enter a whole number in inches.\n\n"
				<< "Inches: ";
			cin >> inches;
			cout << "\n" << inches << " inches is equal to " << (inches/12) << " feet and " << (inches%12) << " inches.\n\n";
			cout << "Would you like to convert another measurement? "; 
			cin >> returns;  //if answer is yes, the user is returned to the main menu
			system("CLS"); //clears screen
			break;	
	
		case 2:
			cout.precision(3); //sets number of places after decimal point to 3
			cout.setf(ios::fixed|ios::showpoint); //shows decimal point
			double decFeet;		//I used this to cast the integers feet and inches into a double 
			cout << "\nPlease enter the number of feet and inches you'd like to convert into decimal \nfeet.\n\n ";
			cout << "Feet: ";
			cin >> feet;
			cout << "\nInches: ";
			cin >> inches;
			decFeet = static_cast<double>(feet) * 12 + static_cast<double>(inches);
			cout << "\n" << feet << " feet " << inches << " inches equals " << decFeet/12 << " feet.\n";
			cout << "Would you like to convert another measurement? ";
			cin >> returns;
			system("CLS");
			break;

		case 3:
			cout << "\nPlease enter the number of feet and inches you'd like to convert into inches.\n\n";
			cout << "Feet: ";
			cin >> feet;
			cout << "\nInches: ";
			cin >> inches;
			cout << "\n" << feet << " feet " << inches << " inches equals " << (feet/12 + inches) * 12 << " inches.\n";
			cout << "Would you like to convert another measurement? ";
			cin >> returns;
			system("CLS");
			break;
	
		case 4:
			cout << "\nGoodbye.\n";  //I can't get this to display as the screen clears, but I don't have a CLS here? weird
			return 0;
		}

	}while (returns == "yes"); //while the variable returns is "yes" the loop will continue to run
}
