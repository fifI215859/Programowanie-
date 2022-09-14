#include <iostream>
/*
void showMenu()
{
	system("cls");
	std::cout << "Menu:\n"
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


		case 0;
		 return;
	default:
		std::cout << "Brak opcji w menu:\n"
			break;
	}

	system("pause");
	/*
	if (selectedOption == 1)
	{
		squareArena();
	}
	if (selectedOption == 2)
	{
		triangleArea();
	else if (selectedOption)
	}
}*/
/*
void mainProgram()
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

void main()
{
	mainProgram();
}*/
void zad1()
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
void ZAD2()
{
	int lenght; 
	int liczab; 
	int liczba2;

}