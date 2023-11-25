#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
bool findWord(char ch, string word);
int alpha_count(char ch);
string lowerCase(string word);
void play(string word);
string beginner();
string intermadiate();
string expert();
int gameLevel();
int main()
{
	int lvl;
	string word;
	lvl = gameLevel();
	switch (lvl) {
	case 1:
		word=beginner();
		break;
	case 2:
		word = intermadiate();
		break;
	default:
		word = expert();
		break;
	}
	play(word);
	return 0;
}
/* A function for that displays the menu and takes the input from the menu */
int gameLevel()
{
	int lvl = 0;
	cout << "Choose level\n" << "1.Beginner\n" << "2.Intermadiate\n" << "3.Expert\n";
	cin >> lvl;
	switch (lvl)
	{
	case 1:
		return 1;
		break;
	case 2:
		return 2;
		break;
	default:
		return 3;
		break;
	}
}
string beginner()
{
	srand(time(0));
	string ext = ".txt";
	string path = "Dictionary/";
	int random=(rand() % 26)+1;
	char letter = 'A' + random - 1;
	string fileName = path+letter+ext;
	//fileName += ext;
	int letterCount = alpha_count(letter);
	int divisor = ((rand() % 100) + 2);
	int wordNo = letterCount / divisor;
	int count = 1;
	string word;
	ifstream file(fileName);
	if (file.is_open())
	{
		do 
		{
			if(wordNo>=count)
			{
				getline(file, word);
			}
			if (file.eof())
			{
				file.seekg(0,ios::beg);
				wordNo = ((rand() % 100) + 1);
				count = 1;
			}
			count++;
		} while(!(word.length()==4));

		file.close();
	}
	else
	{
		cout << "Sorry! File cannot be opened.\n";
	}
	return word;
}
string intermadiate()
{
	srand(time(0));
	string ext = ".txt";
	string path = "Dictionary/";
	int random = (rand() % 26) + 1;
	char letter = 'A' + random - 1;
	string fileName = path + letter + ext;
	//fileName += ext;
	int letterCount = alpha_count(letter);
	int divisor = ((rand() % 100) + 2);
	int wordNo = letterCount / divisor;
	int count = 1;
	string word;
	ifstream file(fileName);
	if (file.is_open())
	{
		do
		{
			if (wordNo >= count)
			{
				getline(file, word);
			}
			if (file.eof())
			{
				file.seekg(0, ios::beg);
				wordNo = ((rand() % 100) + 1);
				count = 1;
			}
			count++;
		} while (!(word.length() == 5));

		file.close();
	}
	else
	{
		cout << "Sorry! File cannot be opened.\n";
	}
	return word;
}
string expert()
{
	srand(time(0));
	string ext = ".txt";
	string path = "Dictionary/";
	int random = (rand() % 26) + 1;
	char letter = 'A' + random - 1;
	string fileName = path + letter + ext;
	//fileName += ext;
	int letterCount = alpha_count(letter);
	int divisor = ((rand() % 100) + 2);
	int wordNo = letterCount / divisor;
	int count = 1;
	string word;
	ifstream file(fileName);
	if (file.is_open())
	{
		do
		{
			if (wordNo >= count)
			{
				getline(file, word);
			}
			if (file.eof())
			{
				file.seekg(0, ios::beg);
				wordNo = ((rand() % 100) + 1);
				count = 1;
			}
			count++;
		} while (!(word.length() == 6));

		file.close();
	}
	else
	{
		cout << "Sorry! File cannot be opened.\n";
	}
	return word;
}
void play(string word)
{
	int length = word.length();
	string guess;
	for (int i = 0; i < length + 1; i++)
	{
		cout << "Enter your guess " << i + 1 << endl;
		cin.ignore();
		do
		{
			cin>>guess;
			if (guess.length() != length)
				cout << "Invalid! The word should have"<< length<<"letters only.\n";
		} while (!(guess.length() == length));
		guess = lowerCase(guess);
		if (word == guess)
		{
			cout << "Your guess is correct!\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
			cout << guess << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			break;
		}
		for (int j = 0; j < length; j++)
		{
			if (word[j] == guess[j])
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
				cout << guess[j];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else if (findWord(guess[j], word))
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_GREEN);
				cout << guess[j];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
				cout << guess[j];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			}
		}
		cout << endl;
	}
	if (word != guess)
	{
		cout << "Better luck next time!\n";
	}
	return;
}
string lowerCase(string word)
{
	int length = word.length();
	for (int i = 0; i < length; i++)
	{
		word[i] = tolower(word[i]);
	}
	return word;
}
bool findWord(char ch, string word)
{
	int length = word.length();
	bool found = false;
	for (int i = 0; i < length; i++)
	{
		if (word[i] == ch)
			found = true;
	}
	return found;
}
int alpha_count(char ch)
{
	switch (ch) {
	case 'A':
		return 7295;
		break;
	case 'B':
		return 7271;
		break;
	case 'C':
		return 11381;
		break;
	case 'D':
		return 7216;
		break;
	case 'E':
		return 5150;
	case 'F':
		return 5388;
		break;
	case 'G':
		return 4746;
		break;
	case 'H':
		return 4499;
		break;
	case 'I':
		return 3684;
		break;
	case 'J':
		return 1286;
		break;
	case 'K':
		return 1576;
		break;
	case 'L':
		return 4125;
		break;
	case 'M':
		return 6890;
		break;
	case 'N':
		return 2521;
		break;
	case 'O':
		return 3680;
		break;
	case 'P':
		return 10277;
		break;
	case 'Q':
		return 719;
		break;
	case 'R':
		return 6793;
		break;
	case 'S':
		return 15916;
		break;
	case 'T':
		return 7288;
		break;
	case 'U':
		return 4424;
		break;
	case 'V':
		return 2363;
		break;
	case 'W':
		return 3146;
		break;
	case 'X':
		return 121;
		break;
	case 'Y':
		return 607;
		break;
	default:
		return 623;
		break;
	}
}