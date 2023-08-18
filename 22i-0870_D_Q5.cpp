/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 4*/
#include<iostream>
using namespace std;
int main()
{
	//Declaring Variables
	const int size1 = 3, size2 = 4, size3 = 4, size4 = 6, size5 = 10;
	const int sizemax = size1 + size2 + size3 + size4 + size5;
	bool error = 0;
	int counter, temp, newsize = sizemax;
	int A1[size1], A2[size2], A3[size3], A4[size4], A5[size5], MergedArray[sizemax];
	
	//Array 1
	cout << "Enter " << size1 << " values for Array 1 in ascending order: ";
	while(error != 1)
	{
		counter = 0;
		//Taking Input
		for (int i = 0; i < size1; i++)
		{
			cin >> A1[i];
			MergedArray[i] = A1[i];
		}
		//Input Validation
		for (int i = 0; i < size1 - 1; i++)
		{
			if (A1[i] > A1[i+1])
			{
				error = 1;
				break;
			}
			else
			{
				counter++;
			}
		}
		if (counter == size1 - 1)
		{
			break;
		}
		if (error == 1)
		{
			cout << "Read input in correct format" << endl;
			error = 0;
		}
	}
	
	//Array 2
	cout << "Enter " << size2 << " values for Array 2 in ascending order: ";
	while(error != 1)
	{
		counter = 0;
		//Taking Input
		for (int i = 0; i < size2; i++)
		{
			cin >> A2[i];
			MergedArray[i + size1] = A2[i];
		}
		//Input Validation
		for (int i = 0; i < size2 - 1; i++)
		{
			if (A2[i] > A2[i+1])
			{
				error = 1;
				break;
			}
			else
			{
				counter++;
			}
		}
		if (counter == size2 - 1)
		{
			break;
		}
		if (error == 1)
		{
			cout << "Read input in correct format" << endl;
			error = 0;
		}
	}
	
	//Array 3
	cout << "Enter " << size3 << " values for Array 3 in ascending order: ";
	while(error != 1)
	{
		counter = 0;
		//Taking Input
		for (int i = 0; i < size3; i++)
		{
			cin >> A3[i];
			MergedArray[i + size1 + size2] = A3[i];
		}
		//Input Validation
		for (int i = 0; i < size3 - 1; i++)
		{
			if (A3[i] > A3[i+1])
			{
				error = 1;
				break;
			}
			else
			{
				counter++;
			}
		}
		if (counter == size3 - 1)
		{
			break;
		}
		if (error == 1)
		{
			cout << "Read input in correct format" << endl;
			error = 0;
		}
	}
	
	//Array 4
	cout << "Enter " << size4 << " values for Array 4 in ascending order: ";
	while(error != 1)
	{
		counter = 0;
		//Taking Input
		for (int i = 0; i < size4; i++)
		{
			cin >> A4[i];
			MergedArray[i + size1 + size2 + size3] = A4[i];
		}
		//Input Validation
		for (int i = 0; i < size4 - 1; i++)
		{
			if (A4[i] > A4[i+1])
			{
				error = 1;
				break;
			}
			else
			{
				counter++;
			}
		}
		if (counter == size4 - 1)
		{
			break;
		}
		if (error == 1)
		{
			cout << "Read input in correct format" << endl;
			error = 0;
		}
	}
	
	//Array 5
	cout << "Enter " << size5 << " values for Array 5 in ascending order: ";
	while(error != 1)
	{
		counter = 0;
		//Taking Input
		for (int i = 0; i < size5; i++)
		{
			cin >> A5[i];
			MergedArray[i + size1 + size2 + size3 + size4] = A5[i];
		}
		//Input Validation
		for (int i = 0; i < size5 - 1; i++)
		{
			if (A5[i] > A5[i+1])
			{
				error = 1;
				break;
			}
			else
			{
				counter++;
			}
		}
		if (counter == size5 - 1)
		{
			break;
		}
		if (error == 1)
		{
			cout << "Read input in correct format" << endl;
			error = 0;
		}
	}

	//Ordering Array
	while (counter != 0)
	{
		counter = 0;
		for (int i = 0; i < newsize - 1; i++)
		{
			if (MergedArray[i] < MergedArray[i + 1])
			{
				temp = MergedArray[i];
				MergedArray[i] = MergedArray[i + 1];
				MergedArray[i + 1] = temp;
				counter++;
			}
			//Removing repetitions
			else if (MergedArray[i] == MergedArray[i + 1])
			{
				for (int j = i + 1; j < newsize - 1; j++)
				{
					MergedArray[j] = MergedArray[j + 1];
				}
				newsize--;
				counter++;
			}
		}
	}
	
	//Outputting Result
	cout << "Array A1: {" << A1[0];
	for (int i = 1; i < size1; i++)
	{
		cout << ", " << A1[i];
	}
	cout << "}" << endl;
	
	cout << "Array A2: {" << A2[0];
	for (int i = 1; i < size2; i++)
	{
		cout << ", " << A2[i];
	}
	cout << "}" << endl;
	
	cout << "Array A3: {" << A3[0];
	for (int i = 1; i < size3; i++)
	{
		cout << ", " << A3[i];
	}
	cout << "}" << endl;
	
	cout << "Array A4: {" << A4[0];
	for (int i = 1; i < size4; i++)
	{
		cout << ", " << A4[i];
	}
	cout << "}" << endl;
	
	cout << "Array A5: {" << A5[0];
	for (int i = 1; i < size5; i++)
	{
		cout << ", " << A5[i];
	}
	cout << "}" << endl;
	
	cout << "Merged Array: {" << MergedArray[0];
	for (int i = 1; i < newsize; i++)
	{
		cout << ", " << MergedArray[i];
	}
	cout << "}" << endl;
	return 0;
}

