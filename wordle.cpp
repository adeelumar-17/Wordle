#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <string>
using namespace std;
enum alpha
{
	A=7295,
	B=7271,
	C=11381,
	D=7216,
	E=5150,
	F=5388,
	G=4746,
	H=4499,
	I=3684,
	j=1286,
	K=1576,
	L=4125,
	M=6890,
	N=2521,
	O=3680,
	P=10277,
	Q=719,
	R=6793,
	S=15916,
	T=7288,
	U=4424,
	V=2363,
	W=3146,
	X=121,
	Y=607,
	Z=623
};
int main()
{

	return 0;
}
void gameLevel()
{
	int lvl = 0;
	cout << "Choose level\n" << "1.Beginner\n" << "2.Intermadiate\n" << "3.Expert\n";
	switch (lvl)
	{
	case 1:

		break;
	case 2:

		break;
	default:

		break;
	}
}
void beginner()
{
	int lng = 4;
	srand(time(0));
	int random=(rand() % 26)+1;
	char letter = 'A' + random - 1;
	string fileName = letter + ".txt";
	ifstream file(fileName);
	if (file.is_open())
	{

		file.close();
	}
	else
	{
		cout << "Sorry! File cannot be opened.\n";
	}
	
}
