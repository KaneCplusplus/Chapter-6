//NumberGameWithSwitchStatements
//Date: 04/23/18
//Author: Kane Greenwalt

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

int Easy(void)
{
	int NumChoice;
	int secret;
	int count = 1;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	do{
		std::cout << "Please pick a number between 1-10" << std::endl;
		std::cin >> NumChoice;

		if (NumChoice > secret)
		{
			std::cout << "Lower m8" << std::endl;
			count++;
		}
		else if (NumChoice < secret)
		{
			std::cout << "Higher silly billy." << std::endl;
			count++;
		}

	} while (NumChoice != secret);

	std::cout << "Congralations! it took you " << count << " Tries." << std::endl;
	system("Pause");
	return 0;
}
int Med(void)
{
	int NumChoice;
	int secret;
	int count = 1;
	srand(time(NULL));
	secret = rand() % 50 + 1;

	do{
		std::cout << "Please pick a number between 1-50" << std::endl;
		std::cin >> NumChoice;

		if (NumChoice > secret)
		{
			std::cout << "Lower m8" << std::endl;
			count++;
		}
		else if (NumChoice < secret)
		{
			std::cout << "Higher silly billy." << std::endl;
			count++;
		}

	} while (NumChoice != secret);

	std::cout << "Congralations! it took you " << count << " Tries." << std::endl;
	system("Pause");
	return 0;
}
int Hard(void)
{
	int NumChoice;
	int secret;
	int count = 1;
	srand(time(NULL));
	secret = rand() % 100 + 1;

	do{
		std::cout << "Please pick a number between 1-100" << std::endl;
		std::cin >> NumChoice;

		if (NumChoice > secret)
		{
			std::cout << "Lower m8" << std::endl;
			count++;
		}
		else if (NumChoice < secret)
		{
			std::cout << "Higher silly billy." << std::endl;
			count++;
		}

	} while (NumChoice != secret);

	std::cout << "Congralations! it took you " << count << " Tries." << std::endl;
	system("Pause");
	return 0;
}
int Extream(void)
{
	int NumChoice;
	int secret;
	int count = 1;


	do{
		srand(time(NULL));
		secret = rand() % 100 + 1;
		std::cout << "Please pick a number between 1-100" << std::endl;
		std::cin >> NumChoice;

		if (NumChoice > secret)
		{
			std::cout << "Nope Try again" << std::endl;
			count++;
		}
		else if (NumChoice < secret)
		{
			std::cout << "Nope Try again." << std::endl;
			count++;
		}

	} while (NumChoice != secret);

	std::cout << "Congralations! it took you " << count << " Tries." << std::endl;
	system("Pause");
	return 0;
}
int main()
{
	int Mode;

	std::cout << "Please choose your difficulty \nEasy\nMedium\nHard\nExtream " << std::endl;
	std::cin >> Mode;
	switch (Mode)
	{
	case 1:
		Easy();
		break;
	case 2:
		Med();
		break;
	case 3:
		Hard();
		break;
	case 4:
		Extream();
		break;
	}
		
	system("Pause");
}