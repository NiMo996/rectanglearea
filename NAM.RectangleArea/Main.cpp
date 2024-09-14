//Nick Moede 9/13/24
//C++ Rectangle Area Program 
#include <iostream>
#include <conio.h>
using namespace std;

void DisplayArea(double area) //void because it doesn't return any value
{
	cout << "The area of the rectangle is: " << area << endl;
}
double CalculateArea(int length, int width)
{
	return length * width;
}	
int GetWidthFromUser(int& width)
{
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	return width;
}
int GetLengthFromUser(int& length)
{
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	return length;
}

int main()
{
	int intLength = 0;
	int intWidth = 0;
	double dblArea = 0;
	intLength = GetLengthFromUser(intLength);
	intWidth = GetWidthFromUser(intWidth);
	
	dblArea = CalculateArea(intLength, intWidth);

	DisplayArea(dblArea);


	(void)_getch();
	return 0;
}

