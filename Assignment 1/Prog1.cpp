#include <iostream>

using namespace std;
//Programm 1
//Body Mass Index(BMI) is a measure of health on weight.It can be calculated by
//taking your weight in kilogramsand dividing by the square of your height in meters.
//Write a program than prompts the user to enter a weight in poundsand height in
//inchesand display the BMI.Note that 1 pound is 0.45359237 kilogram and 1 inch is
//0.0254 meter.

int main()
{
	double weight, height;
	double bmi;
	cout << "Enter weight in pounds:" << endl;
	cin >> weight;
	if (weight < 0 || weight == 0)//Weight equal 0 or negative number check
	{
		cout << "You entered wrong weight";
		return 0;
	}
	cout << "Enter height in inches:" << endl;
	cin >> height;
	if (height < 0 || height == 0)//Height equal 0 or negative number check
	{
		cout << "You entered wrong height";
		return 0;
	}
	bmi = (weight * 0.45359237 / pow(height * 0.0254, 2));//Formula for BMI(since we have weight in	
	//pounds and height in inches we have to convert it to kilos and meters)
	cout << "Your bmi is:" << bmi << endl;
	return 0;
}