#include <iostream>

struct CoordinateGPS
{
	int x, y;
};

struct Direction
{
	int x, y;
};
class Car
{
public:

#pragma region Konstrukory

	Car(std::string name)
	{
		this->name = name;
		coordinateGPS.x = 0;
		coordinateGPS.y = 0;
		direction.x = 1;
		direction.y = 0;
	}

	Car(std::string name, int x, int y)
	{
		this->name = name;
		coordinateGPS.x = x;
		coordinateGPS.y = y;
	}
	

#pragma endregion

	void ShowInfo()
	{
		std::cout << "**********************************\n";
		std::cout << "samolochod o nazwie:" << name << "\n";
		std::cout << "Pozycja (" << coordinateGPS.x << ";" << coordinateGPS.y << ")\n";
		std::cout << "**************************************\n";
	}

	void MoveForward()
	{
		coordinateGPS.x += direction.x;
		coordinateGPS.y += direction.y;
	}
#pragma region Turn method
	void TurnLeft()
	{

		if (direction.x == 1 && direction.y == 0)
		{
			direction.x = 0;
			direction.y = -1;
		}
		else if (direction.x == 0 && direction.y == 1)
		{
			direction.x = 1;
			direction.y = 0;
		}
		else if (direction.x == -1 && direction.y == 0)
		{
			direction.x = 0;
			direction.y = 1;
		}
		else if (direction.x == 0 && direction.y == -1)
		{
			direction.x = -1;
			direction.y = 0;
		}

	}

	void TurnRight()
	{/*
		if (direction.x == 1 && direction.y == 0)
		{
			direction.x = 0;
			direction.y = -1;
		}
		else if (direction.x == 0 && direction.y == 1)
		{
			direction.x = 1;
			direction.y = 0;
		}
		else if (direction.x == -1 && direction.y == 0)
		{
			direction.x = 0;
			direction.y = 1;
		}
		else if (direction.x == 0 && direction.y == -1)
		{
			direction.x = -1;
			direction.y = 0;
		}*/
		int tmpX = direction.x;
		direction.x = -direction.y;
		direction.y = tmpX;
	}

	void TurnBack()
	{
		TurnRight();
		TurnRight();
	}
#pragma endregion 
protected:

private:
	std::string name;
	CoordinateGPS coordinateGPS;
	Direction direction;

};
int main()
{
	setlocale(LC_CTYPE, "polish");

	Car carFirst("Bugatti La Vointure Norie");
	Car carSecond("Audi RSQ8", 10, 10);

	carFirst.ShowInfo();
	carSecond.ShowInfo();

	carFirst.MoveForward();
	carFirst.TurnLeft();
	carFirst.MoveForward();

	carFirst.MoveForward();

}