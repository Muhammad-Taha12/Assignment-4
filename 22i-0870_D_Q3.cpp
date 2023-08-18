/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 4*/
#include<iostream>
using namespace std;

//Function Prototypes
double evaluatePolynomial();

//Start of Main
int main()
{
	double result = evaluatePolynomial();  //Function Call
	//Outputting Result
	cout << "The result is: " << result << endl;
	return 0;
}

//Function Definition
double evaluatePolynomial()
{
	//Declaring Variables
	double x, c, total = 0, squares;
	int n;
	//Taking Input from User
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the highest power n: ";
	cin >> n;
	//Input Validation
	while (n < 0)
	{
		cout << "Error (power must be >= 0), Enter again: ";
		cin >> n;
	}
	//Getting co-efficients from user
	cout << "Enter " << n + 1 << " co-efficients in order of descending power: ";
	for (int sum = 0; sum <= n; sum++)
	{
		squares = 1;
		cin >> c;
		//Using loop to multiply number with itself times the power
		for (int power = n; power > sum; power--)
		{
			squares *= x;
		}
		//Multiplying the squares with co-efficient
		total += c * squares;
	}
	return total;
}
