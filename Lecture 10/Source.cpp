//Lecture 10 supplmentary program

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int a(5), b(3), c;
	int count(0);

	if (a > b) {
		++count;
		cout << "count: " << count << endl;
	}
	else {
		c = a + b;
		cout << "c: " << c << endl;
	}
	// ? is a conditional operator that allows the replacement of a basic if else statement.
	// usage as follows:		condition ? case if true : case if false
	// This only works for a single operation case, you cannot do multiple operations as above using this operator
	cout << "a > b " <<( a > b ? ++count  : c = a + b) << endl; //condition ? if true : if false ; This is the same code as above put into one line in a cout statement

	//example 2
	//Comparing decimal values

	float x = 3.141617;


	// A common error that happens in comparison is = vs ==. = is for assignement == is for comparison. 
	// = will not return an error it will reassign your variable and return true if it is != 0 since 1 is true and 0 is false

	if (x == 3.141617) {	// This statement will output false since x is a binary representation of the same but not exact value compared. 
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	// To get the comparison working reliably it is better to check if the values are very close using subtraction
	if (abs(x - 3.141617) < 0.00001) { // Since this is checking if x is very near that number it allows for binary conversion error.
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	// Example 3 
	// Comparing Strings

	// String variables default to being initialized to " " a space and do not need to be initialized to be used.
	string name1 = "John";
	string name2 = "Steve";

	// When comparing strings the compiler will evaluate it based on an ascii table with later letters having a higher value
	// This means that comparisons will need logic for reverse alphabetical order. A == 44, z == 122. so 'a < z'

	if (name1 > name2) { // This is false. Since J is earlier in the alphabet it has a lower numerical value.
		cout << name2 << " comes before " << name1 << " in the dictionary" << endl;
	}
	else if (name1 < name2) {
		cout << name1 << " comes before " << name2 << " in the dictionary" << endl;
	}
	else {
		cout << "Both names are equal in the dictionary" << endl;
	}


	// Example 4
	int grade;

	cout << "Enter the grade: " << endl;
	cin >> grade;

	// When trying to sort an input into a certain category, the order of operations is key
	// By putting your checks largest to smallest you only need to check the lower bound of each category
	// The check will run and return the first value that evaluates true then exit the loop.

	if (grade >= 90) { 
		cout << "Your letter grade is A+" << endl; // only returns numbers 90 + 
	}
	else if (grade >= 85) {
		cout << "Your letter grade is A" << endl; // Since 90 + has already been filtered this gets 85 - 89
	}
	else if (grade >= 80) {
		cout << "Your letter grade is A-" << endl; // 80 - 84
	}
	else if (grade >= 77) {
		cout << "Your letter grade is B+" << endl; // 77 - 79
	}
	else if (grade >= 73) {
		cout << "Your letter grade is B" << endl; // 73 - 76
	}
	else {
		cout << "Less than a B" << endl; // Anything less than 73
	}
	// If these checks are put out of order it will not properly filter out the upper bounds of that category.

	

	system("pause");
	return 0;
}