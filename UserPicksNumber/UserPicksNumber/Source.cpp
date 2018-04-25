//Program: YouPickTheNumber
//Date: 04/23/18
//Author: Kane Greenwalt

#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <conio.h>
#include <dos.h>
#include <windows.h>

int main()
{
	
	int UserChoice;
	int computer;
	int count = 1;
	std::cout << "Pick a number between 1-50" << std::endl;
	std::cin >> UserChoice;
	
	do
	{
		Sleep(1000);
		srand(time(NULL));
		computer = rand() % 50 + 1;
		count++;
		std::cout << computer << "first guess" << std::endl;
	} while (computer != UserChoice);


	std::cout << "It took the computer " << count << " tries." << std::endl;



	system("Pause");
	return 0;
}