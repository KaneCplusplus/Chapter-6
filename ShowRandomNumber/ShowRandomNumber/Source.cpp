//program: ShowRandomNumber
//Author: Kane Greenwalt
//Date: 04/24/18

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{
	int Number;
	int count = 0;
	

	do
	{
		srand(time(NULL));
		Number = rand() % 100 + 1;
		std::cout << Number << std::endl;
		count++;
	} while (count != 10);
	system("Pause");
	return 0;
}