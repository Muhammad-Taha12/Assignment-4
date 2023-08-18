/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 4*/
#include<iostream>
using namespace std;

//Function Prototypes
int digit(int n,int k);

//Start of Main
int main()
{
	//Declaring Variables
	int n, dig, result;
	//Getting Input from User
	cout << "Enter a positive integer n: ";
	cin >> n;
	//Input Validation
	while (n <= 0)
	{
		cout << "Invalid Input! n must be positive, Enter again: ";
		cin >> n;
	}
	cout << "Enter the digit to find: ";
	cin >> dig;
	while (dig < 0)
	{
		cout << "Invalid Input! Digit number must be positive, Enter again: ";
		cin >> dig;
	}
	result = digit(n, dig);  //Calling Function
	//Outputting Result
	if (result != -1)
	{
		cout << "The " << dig << " digit of " << n << " is: " << result << endl;
	}
	else
	{
		cout << "Index out of bound" << endl;
	}
	return 0;
}

//Function Definition
int digit(int n, int k)
{
	int remainder, diginum, n2 = n, counter = -1, check;
	//Checking number of digits
	while (n2 > 0)
	{
		n2 /= 10;
		counter++;
	}
	for (int d = counter; d >= k; d--)
	{
		//Calculating
		remainder = n % 10;
		n /= 10;
		check = 1;
	}
	if (check == 1)
	{
		return remainder;
	}
	else
	{
		return -1;
	}	
}
