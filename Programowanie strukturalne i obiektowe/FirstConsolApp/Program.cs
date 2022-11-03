using System;

namespace FirstConsolApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Hello World!");
            Console.WriteLine("Hello World!");

            int number = 57;

            Console.Write("Wartośc zmiennej to:");
            Console.WriteLine(number);

            Console.WriteLine("Wartość zmiennej to:" + number + "Macie przerwę");
            Console.WriteLine("Wartość zmiennej to: {number} Macie przerwę");
            Console.WriteLine($"Wartość zmiennej to: {number} Macie przerwę");

            Console.WriteLine("Prędkość to km\\h");
            Console.WriteLine(@"Prędkość to km\h");
            Console.WriteLine("C:\\Foloder1\\Folder2\\plik.txt");
            Console.WriteLine(@"C:\Foloder1\Folder2\plik.txt");
            Console.WriteLine("C:=/Foloder1/Folder2/plik.txt");

            //>, <, <=, >=, ==, ++

            if (number == 5)
            {
                Console.WriteLine("Jest równe");
            }
            else
            {
                Console.WriteLine("Nie równe");
            }

            var number2 = number + 6.0 +"ydtf";
        }
    }
}
