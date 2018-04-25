//Program:Currency Exchange
//Date: 04/15/18
//Author: Kane Greewnalt

#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>

int main()
{
	std::string UserChoice;
	double CanDollar = 0.9813;
	double Euro = 0.757;
	double Rupee = 52.53;
	double Yen = 80.92;
	double Peso = 13.1544;
	double Rand = 7.7522;
	double Pound = 0.6178;
	int amountWanted;
	double total;
	std::cout << "What currency do you want to exchange to?" << std::endl;
	std::cin >> UserChoice;

	if (UserChoice == "Canadian" || UserChoice == "c")
	{
		std::cout << "How much would you want to exchange" << std::endl;
		std::cin >> amountWanted;

		total = CanDollar * amountWanted;
		std::cout << std::setprecision(2) << total;
	}




	system("Pause");
		return 0;
}