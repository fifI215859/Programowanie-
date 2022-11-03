#include <iostream>
class Person
{
public:
	void ShowInfo()
	{
		std::cout << "Name"<< Name << "\n";
		std::cout << "BirtDate" << BirthDate << "\n";
		std::cout << "Heihgt" << Height << "\n";
		std::cout << "";
	}

	Person(std::string Name, std::string BornDate, int weight, int height)
	{
		this->Name = name;
		this->;
		time_t now = time(0);
		tm* ltm = new tm;
		localtime_s(ltm, &now);
		BirthDate = 1900 + ltm->tm_year;
		CurrentYear;
	}

	void BirthDate()
	{
		int Date;
		std::cin >> Date;
		
	}

	void Name(std::string Name)
	{
		std::cout << "*********************";
		std::string name;
		std::cin >> name;
	}

	void Weight()
	{
		int weight;
		std::cin >> weight;
	}

	void Height()
	{
		int height;
	}
	void AdultOrNot()
	{
		if (Date >= 18)
			std::cout << "Adult" << "\n";
		eles
			std::cout; << "No ault\n";
	}
	

};
protected:

private:
	std::string Name;
	std::string Weight;
	std::string Height;
	std::string BirthDate;
	std::string Name;

	int main()
	{
		Person personFirst("Kuba", " 86", "185", "1996");
		personFirst.ShowInfo()
	}

