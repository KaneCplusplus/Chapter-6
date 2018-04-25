//program:  Rock Paper Scissors
//Date: 04/24/18
//Author: Kane Greenwalt

#include<iostream>
#include<string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	std::string UserChoice;
	int Computer;
	srand(time(NULL));
	Computer = rand() % 3 + 1;
	std::cout << "Rock Paper or scissors?" << std::endl; 
	std::cin >> UserChoice;
	do 
	{
		if (UserChoice == "Rock")
		{
			if (Computer == 3)
			{
				std::cout << "paper beats rock" << std::endl;
			}
			if (Computer == 2)
			{
				std::cout << "You win, rock beats scissors" << std::endl;
			}
			if (Computer == 1)
			{
				std::cout << "Tie" << std::endl;
			}

		}
		if (UserChoice == "Paper")
		{
			if (Computer == 3)
			{
				std::cout << "Scissors beats rock" << std::endl;
			}
			if (Computer == 2)
			{
				std::cout << "You win, rock beats Rock" << std::endl;
			}
			if (Computer == 1)
			{
				std::cout << "Tie" << std::endl;
			}

		}
		if (UserChoice == "Scissors")
		{
			if (Computer == 3)
			{
				std::cout << "Rock beats scissors, you loose. " << std::endl;
			}
			if (Computer == 2)
			{
				std::cout << "You win, Scissors beats Paper" << std::endl;
			}
			if (Computer == 1)
			{
				std::cout << "Tie" << std::endl;
			}

		}
	} while (Computer == 2);
	
	


	system("Pause");
	return 0;
}