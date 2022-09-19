#include <iostream>

void showMenu()
{
	system("cls");
	std::cout << "Menu:\n";
	std::cout << "1. Pole kwadratu\n";
	std::cout << "2. Pole trojkata\n";

	std::cout << "0, Zamknij progrma\n";
}

int chooseOptionFromUser()
{
	std::cout << "Wybierz opcje\n";
	int selectedOption;
	std::cin >> selectedOption;
	return selectedOption;
}

void squareArena()
{
	std::cout << "podaja wartos boku kwadratu:\n";
	int side;
	std::cin >> side;
	int area = side * side;
	std::cout << "PoleKwadratu to " << area << "\n";
}

void triangleArea()
{
	std::cout << "podaja wartos podstawy\n";
	int base;
	std::cout << "podaja wartos wysokaœci\n";
	int height;
	int area = height * base / 2;
	std::cout << "Pole Kwadratu to " << area << "\n";
}

void doSelectedTask(int selectedOption)
{
	switch (selectedOption)
	{
	case 1:
		squareArena();
		break;
	case 2:
		triangleArea();
		break;
	case 3:
		return;
	default:
		std::cout << "Brak opcji w menu:\n";
		break;
	}

	system("pause");

	if (selectedOption == 1)
	{
		squareArena();
	}
	if (selectedOption == 2)
	{
		triangleArea();
	else
	{
		if (selectedOption)
	}
	}

	void mainProgram();
	{
		int selected;
		do
		{
			//1. wyœwietlenie menu
			showMenu();

			//2. wybranie opcji przez u¿ytkownika
			int selected = chooseOptionFromUser();

			//3. Wykonanie wybranego zadania
			doSelectedTask(selected);
		} while (selected != 0);
	}

	void zad1();
	{
		int liczba;
		std::cout << "podaj liczbe\n";
		std::cin >> liczba;
		for (int i = liczba; i > 0; i--)
		{
			if (i % 2 != 0)
				std::cout << i << ",";
		}
	}
	void ZAD2();
	{
		int number;
		int currentFibonaciNumber = 0;
		int prevOneFibonaciNumber = 0;
		int prevTwoFibonaciNumber = 1;
		for (int i = 0; i < 0; i++)
		{
			currentFibonaciNumber = prevOneFibonaciNumber + prevTwoFibonaciNumber;
			std::cout << currentFibonaciNumber;

			prevTwoFibonaciNumber = prevOneFibonaciNumber;
			prevOneFibonaciNumber = currentFibonaciNumber;
		}
	}
	void zad3();
	{
		int liczba;
		std::cout << "podaj liczbe\n";
		std::cin >> liczba;
		for (int i = 1; i <= liczba; i++)
		{
			if (liczba % i == 0)
				std::cout << i << ",";
		}
		std::cout << "\n"; \
			//ver 2.0
			for (int i; i <= sqrt(liczba); i++)
			{
				if (liczba % i == 0)
					std::cout << "i" << ",";
				int divider = liczba / i;
				if (divider != i)
					std::cout << (liczba / i) << ",";
			}
		std::cout << '\n';


		//ver 3.0
		int changeliczba;
		if (liczba % 2 == 0)
			changeliczba = 1;
		else
			changeliczba = 2;
		for (int i; i <= sqrt(liczba); i++)
		{
			if (liczba % i == 0)
				std::cout << "i" << ",";
			int divider = liczba / i;
			if (divider != i)
				std::cout << (liczba / i) << ",";
		}
		std::cout << '\n';
	}

	void zad4();
	{
		std::cout << "podaj liczbe";
		int numberFromUser;
		std::cin >> numberFromUser;

		std::string arrayOfWordsNumber[10] = { "zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "sziedem", "osiem","dziewiec" };
		int number = numberFromUser;
		do
		{
			int digit = number % 10;
			number = number / 10;

			std::cout << arrayOfWordsNumber[digit] << "";

		} while (number != 0);
		std::cout << "\n";

		numberFromUser;
		std::cin >> numberFromUser;

		number = numberFromUser;
		std::string stringNumber = "";
		do
		{
			int digit = number % 10;
			number = number / 10;

			std::cout << arrayOfWordsNumber[digit] << "";

			stringNumber = arrayOfWordsNumber[digit] + " " + stringNumber;

		} while (number != 0);
		std::cout << stringNumber;
		std::cout << "\n";

	}

	void main();
	{
		mainProgram();
	}