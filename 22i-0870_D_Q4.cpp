/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 4*/
#include<iostream>
#include<iomanip>
using namespace std;

//Function Prototypes
int addition(int n1,int n2);
int subtraction(int n1, int n2);
int multiplication(int n1, int n2);
int absolute(int n1);

//Start of Main
int main()
{
	//Declaring Variables
	int num1, num2, answer;
	char op;

	//Display
	cout << "_________________" << endl;
	cout << "|    > Num1     |" << endl;
	cout << "|    Operator   |" << endl;
	cout << "|      Num2     |" << endl;
	cout << "_________________" << endl;
	cout << "|   7   8   9   |" << endl;
	cout << "|   4   5   6   |" << endl;
	cout << "|   1   2   3   |" << endl;
	cout << "|  +  -   *  ~  |" << endl;
	cout << "_________________" << endl;
	//Taking Input from User
	cin >> num1;
	cout << "_________________" << endl;
	cout << "|" << setw(8) << num1 << setw(8) << "|" << endl;
	cout << "|  > Operator   |" << endl;
	cout << "|      Num2     |" << endl;
	cout << "_________________" << endl;
	cout << "|   7   8   9   |" << endl;
	cout << "|   4   5   6   |" << endl;
	cout << "|   1   2   3   |" << endl;
	cout << "|  +  -   *  ~  |" << endl;
	cout << "_________________" << endl;
	cin >> op;
		
	//Input Validation
	while (op != '+' && op != '-' && op != '*' && op != '~')
	{
		cout << "Invalid Operation, it can only be the shown operations, choose again: ";
		cin >> op;
	}
	while (op != '~')
	{
		cout << "_________________" << endl;
		cout << "|" << setw(8) << num1 << setw(8) << "|" << endl;
		cout << "|" << setw(8) << op << setw(8) << "|" << endl;
		cout << "|    > Num2     |" << endl;
		cout << "_________________" << endl;
		cout << "|   7   8   9   |" << endl;
		cout << "|   4   5   6   |" << endl;
		cout << "|   1   2   3   |" << endl;
		cout << "|  +  -   *  ~  |" << endl;
		cout << "_________________" << endl;
		cin >> num2;
		
		cout << "_________________" << endl;
		cout << "|" << setw(8) << num1 << setw(8) << "|" << endl;
		cout << "|" << setw(8) << op << setw(8) << "|" << endl;
		cout << "|" << setw(8) << num2 << setw(8) << "|" << endl;
		cout << "_________________" << endl;
		cout << "|   7   8   9   |" << endl;
		cout << "|   4   5   6   |" << endl;
		cout << "|   1   2   3   |" << endl;
		cout << "|  +  -   *  ~  |" << endl;
		cout << "_________________" << endl;
		break;
	}
	while (op == '~')
	{	
		cout << "_________________" << endl;
		cout << "|" << setw(9) << num1 << setw(7) << "|" << endl;
		cout << "|" << setw(9) << op << setw(7) << "|" << endl;
		cout << "_________________" << endl;
		cout << "|   7   8   9   |" << endl;
		cout << "|   4   5   6   |" << endl;
		cout << "|   1   2   3   |" << endl;
		cout << "|  +  -   *  ~  |" << endl;
		cout << "_________________" << endl;
		break;
	}
	
	//Using Switch statement
	switch (op)
	{
		case '+':
			answer = addition(num1, num2);
			break;
		
		case '-':
			answer = subtraction(num1, num2);
			break;
		case '*':
			answer = multiplication(num1, num2);
			break;
		case '~':
			answer = absolute(num1);
			break;
	}
	
	//Displaying Result
	while (op != '~')
	{
		cout << num1 << " " << op << " " << num2 << " = " << answer << endl;
		break;
	}
	while (op == '~')
	{
		cout << op << num1 << " = " << answer << endl;
		break;
	}
	return 0;
}

//Function Definitions
int addition(int n1,int n2)
{
	//Checking if second number is positive
	while (n2 > 0)
	{
		//Incrementing if positive
		for (int add = 0; add < n2; add++)
		{
			n1++;
		}
		break;
	}
	while (n2 < 0)
	{
		//Decrementing if negative
		for (int add = 0; add > n2; add--)
		{
			n1--;
		}
		break;
	}
	return n1;
}

int subtraction(int n1, int n2)
{
	//Checking if second number is positive
	while (n2 > 0)
	{
		//Decrementing if positive
		for (int sub = n2; sub > 0; sub--)
		{
			n1--;
		}
		break;
	}
	while (n2 < 0)
	{
		//Incrementing if negative
		for (int sub = n2; sub < 0; sub++)
		{
			n1++;
		}
		break;
	}
	return n1;
}

int multiplication(int n1, int n2)
{
	int num1 = n1;
	//Checking if second number is positive
	while (n2 > 0)
	{
		//Checking if first number is also positive
		while (n1 > 0)
		{
			//Positive * Positive = Positive - so incrementing
			for (int mult = 1; mult < n2; mult++)
			{
				for (int add = 0; add < num1; add++)
				{
					n1++;
				}
			}
			break;
		}
		while (n1 < 0)
		{
			//Negative * Positive = Negative - so decrementing
			for (int mult = 1; mult < n2; mult++)
			{
				for (int add = 0; add > num1; add--)
				{
					n1--;
				}
			}
			break;
		}
		break;
	}
	while (n2 < 0)
	{
		while (n1 > 0)
		{
			//Positive * Negative = Negative - so decrementing
			for (int mult = 0; mult >= n2; mult--)
			{
				for (int add = 0; add < num1; add++)
				{
					n1--;
				}
			}
			break;
		}
		while (n1 < 0)
		{
			//Negative * Negative = Positive - so incrementing
			for (int mult = 0; mult >= n2; mult--)
			{
				for (int add = 0; add > num1; add--)
				{
					n1++;
				}
			}
			break;
		}
		break;
	}
	//Checking if second number is 0 because anything multiplied by 0 = 0
	while (n2 == 0)
	{
		while (n1 > 0)
		{
			for (int mult = n1; mult > 0; mult--)
			{
				n1--;
			}
			break;
		}
		while (n1 < 0)
		{
			for (int mult = n1; mult < 0; mult++)
			{
				n1++;
			}
			break;
		}
		break;
	}
	return n1;
}

int absolute(int n1)
{
	int num1 = n1;
	//Checking if number is negative
	while (n1 < 0)
	{
		//Incrementing number twice times itself to become positive
		for (int doub = 1; doub <= 2; doub++)
		{
			for (int abs = 0; abs > num1; abs--)
			{
				n1++;
			}
		}
		break;
	}
	return n1;
}
