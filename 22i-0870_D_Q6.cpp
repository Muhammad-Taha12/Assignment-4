/* Name: Muhammad Taha
   Student-ID: 22I-0870
   Assignment# 4*/
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	//Declaring Variables
	const int size = 100;
	char List[size] = "fast,programming,student,are,lazy,hangmen";
	char Alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Word[size];
	char GuessWord[size];
	char guess, hint = 'T', hintguess;
	int wordcount = 1, randomword, letter = 0, attempt = 1, wincount, type, hintcount = 5, hintcheckcounter = 0, infinicounter;
	bool game = 0, letterfound = 0, input = 0, alphacheck = 0;
	srand(time(0));
	
	//Counting number of words in list
	for (int count = 0; List[count] != '\0'; count++)
	{
		if (List[count] == ',')
		{
			wordcount++;
		}
	}
	
	//Randomly assigning one word
	randomword = 1 + rand() % wordcount;
	
	//Splitting word from list
	wordcount = 1;
	for (int split = 0; List[split] != '\0'; split++)
	{
		if (wordcount == randomword)
		{
			if (List[split] != ',')
			{
				Word[letter] = List[split];
				letter++;
			}
		}
		if (List[split] == ',' || List[split] == '\0')
		{
			wordcount++;
		}
	}
	Word[letter] = '\0';
	
	//Creating guess word to track user's progress
	for (int guessletter = 0; guessletter <= letter; guessletter++)
	{
		GuessWord[guessletter] = '_';
	}
	
	//Displaying Game
	cout << "  +---+" << endl;
	cout << "  |   |" << endl;
	cout << "      |" << endl;
	cout << "      |" << endl;
	cout << "      |" << endl;
	cout << "      |" << endl;
	cout << "=========" << endl;
	
	for (int guess = 0; guess < letter; guess++)
	{
		cout << GuessWord[guess];
	}
	cout << endl;
	
	for (int display = 0; display < 13; display++)
	{
		cout << Alphabet[display] << " ";
	}
	cout << endl;
	
	for (int display = 13; display < 26; display++)
	{
		cout << Alphabet[display] << " ";
	}
	cout << endl;
	
	while (attempt != 7 && game == 0)
	{
		letterfound = 0;
		do
		{
			input = 1;
			alphacheck = 0;
			//Taking Input from User
			cin >> guess;
			//Input Validation
			if (guess < 65 && guess > 90 || guess < 97 && guess > 122)
			{
				input = 0;
			}
			if (guess > 96 && guess < 123)
			{
				guess -= 32;
			}
			for (int man = 0; Alphabet[man] != '\0'; man++)
			{
				if (Alphabet[man] == guess)
				{
					alphacheck = 1;
				}
			}	
			if (input == 0 || alphacheck == 0)
			{
				cout << "Invalid Guess! Choose again: ";
			}
			else
			{
				input = 1;
				for (int alpha = 0; alpha < 26; alpha++)
				{
					//Removing chosen letter from available letters
					if (Alphabet[alpha] == guess)
					{
						Alphabet[alpha] = ' ';
					}
				}
				guess += 32;
				for (int man = 0; Word[man] != '\0'; man++)
				{
					//Checking if letter exists in the word
					if (Word[man] == guess)
					{
						letterfound = 1;
						GuessWord[man] = Word[man];
					}
				}
			}
		} while (input == 0 || alphacheck == 0);
		
		//Decreasing life if letter wasn't found
		if (!letterfound)
		{
			attempt++;
		}
		
		//Displaying the life left
		if (attempt == 1)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
		}
		if (attempt == 2)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "  O   |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
		}
		else if (attempt == 3)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "  O   |" << endl;
			cout << "  |   |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
		}
		else if (attempt == 4)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "  O   |" << endl;
			cout << " /|   |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
		}
		else if (attempt == 5)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "  O   |" << endl;
			cout << " /|\\  |" << endl;
			cout << "      |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
		}
		else if (attempt == 6)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "  O   |" << endl;
			cout << " /|\\  |" << endl;
			cout << " /    |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
			//Asking user if they want a hint at the last life
			if (hint == 'T')
			{
				cout << "Do you want a hint? Press 'Y' or 'y' for yes and anything else for no: ";
				cin >> hint;
			}
			if (hint == 'Y' || hint == 'y')
			{
				//Randomly generating type of hint
				type = 1 + rand() % 2;
				while (type == 1)
				{
					//Randomly revealing one choice
					guess = rand() % 26;
					if (Alphabet[guess] != ' ')
					{
						for (int man = 0; Word[man] != '\0'; man++)
						{
							//Checking if revealed letter is in the word
							if (Word[man] == Alphabet[guess] + 32)
							{
								//Adding found letter to guess word
								GuessWord[man] = Alphabet[guess] + 32;
								type = 0;
							}
						}
					}
					if (type == 0)
					{
						//Removing found letter from options
						Alphabet[guess] = ' ';
					}
					
				}
				if (type == 2)
				{
					//Removing 5 random letters from option list
					while (hintcount > 0)
					{
						guess = rand() % 26;
						hintcheckcounter = 0;
						if (Alphabet[guess] != ' ')
						{
							for (int hintcheck = 0; Word[hintcheck] != '\0'; hintcheck++)
							{
								//Checking if revealed letter is in the word
								if (Word[hintcheck] == Alphabet[guess] + 32)
								{
									hintcheckcounter++;
								}
							}
							//Removing options that aren't in the word
							if (hintcheckcounter == 0)
							{
								Alphabet[guess] = ' ';
								hintcount--;
							}
							//To stop loop if there are too many unique letters in word that haven't been guessed
							if (infinicounter >= 1000000)
							{
								break;
							}
						}
						infinicounter++;
					}
				}
				hint = 'N';
			}
		}
		else if (attempt == 7)
		{
			cout << "  +---+" << endl;
			cout << "  |   |" << endl;
			cout << "  O   |" << endl;
			cout << " /|\\  |" << endl;
			cout << " / \\  |" << endl;
			cout << "      |" << endl;
			cout << "=========" << endl;
		}
		
		//Displaying found letters and options
		for (int guess = 0; guess < letter; guess++)
		{
			cout << GuessWord[guess];
		}
		cout << endl;
				
		for (int display = 0; display < 13; display++)
		{
			cout << Alphabet[display] << " ";;
		}
		cout << endl;
				
		for (int display = 13; display < 26; display++)
		{
			cout << Alphabet[display] << " ";
		}
		cout << endl;
					
		//Checking if user guessed the word
		wincount = 0;
		for(int check = 0; check <= letter; check++)
		{
			if (GuessWord[check] != '_')
			{
				wincount++;
			}
			if (wincount == letter)
			{
				game = 1;
			}
		}
	}
	//Outputting Result of Game
	if (game == 1)
	{
		cout << "Congratulations! You correctly guessed that the word was: " << Word << endl;
	}
	else
	{
		cout << "Too bad! You ran out of guesses, the word was: " << Word << endl;
	}
	return 0;
}
