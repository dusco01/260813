#include <iostream>

using namespace std;

int main()
{
	srand((unsigned int)time(0));
	//[][][]
	int Deck[52] = { 0, };

	for (int i = 0; i < 52; ++i)
	{
		Deck[i] = i + 1;
	}

	for (int i = 0; i < 100000; ++i)
	{
		int Point1 = rand() % 52;
		int Point2 = rand() % 52;
		int Temp = 0;

		Temp = Deck[Point1];
		Deck[Point1] = Deck[Point2];
		Deck[Point2] = Temp;
	}

	int PlayerCard[3];
	int ComputerCard[3];

	PlayerCard[0] = Deck[0];
	ComputerCard[0] = Deck[1];
	PlayerCard[1] = Deck[2];
	ComputerCard[1] = Deck[3];
	PlayerCard[2] = Deck[4];
	ComputerCard[2] = Deck[5];

	int PlayerScore = 0;
	int ComputerScore = 0;

	for (int i = 0; i < 3; ++i)
	{
		int CardScore = PlayerCard[i] % 13;
		int CardType = (PlayerCard[i] - 1) / 13;

		//cout << CardTypePrintf[CardType] << CardScore << ", ";

		if (CardScore == 0)
		{
			PlayerScore += 10;
		}
		else if (CardScore >= 10)
		{
			PlayerScore += +10;
		}
		else
		{
			PlayerScore += CardScore;
		}

	}
	cout << endl;

	for (int i = 0; i < 3; ++i)
	{
		int CardScore = ComputerCard[i] % 13;
		int CardType = (PlayerCard[i] - 1) / 13;

		//cout << CardTypePrintf[CardType] << CardScore << ", ";

		if (CardScore == 0)
		{
			ComputerScore += 10;
		}
		else if (CardScore >= 10)
		{
			ComputerScore += +10;
		}
		else
		{
			ComputerScore += CardScore;
		}
	}
	cout << endl;

	//Á¶°Ç 
	if (PlayerScore > 21)
	{
		if (ComputerScore > 21)
		{
			cout << "Player Win" << endl;
		}
		else
		{
			cout << "Computer Win" << endl;
		}
	}
	else
	{
		//21 under
		if (ComputerScore > 21)
		{
			cout << "Player Win" << endl;
		}
		else if (PlayerScore >= ComputerScore)
		{
			cout << "Player Win" << endl;
		}
		else
		{
			cout << "Computer Win" << endl;
		}
	}

	cout << PlayerScore << endl;
	cout << ComputerScore << endl;

	return 0;
}