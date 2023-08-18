/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 4*/
#include<iostream>
using namespace std;

//Function Prototypes
int euclideanGCD(int , int);

//Start of Main
int main()
{
	//Declaring Variables
	int m, n, GCD;
	//Getting Input from User
	cout << "Enter two positive integers, m and n: ";
	cin >> m >> n;
	//Input Validation
	while (m <= 0 || n <= 0)
	{
		cout << "Invalid Input! m and n must both be positive, Enter again: ";
		cin >> m >> n;
	}
	GCD = euclideanGCD(m, n); //Function Call
	//Outputting Result
	cout << "The greatest common divisor of " << m << " and " << n << " is: " << GCD << endl;
	return 0;
}

//Function Definition
int euclideanGCD(int m, int n)
{
	int remainder;
	//Checking which number is bigger
	if (m >= n)
	{
		//Repeatedly dividing the smaller number from the larger number and storing it in the smaller value while the larger value gets the smaller one
		while(remainder != 0)
		{
			remainder = m % n;
			m = n;
			n = remainder;
		}
		return m;
	}
	else
	{
		while(remainder != 0)
		{
			remainder = n % m;
			n = m;
			m = remainder;
		}
		return n;
	}
}
