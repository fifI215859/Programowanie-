﻿using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Linq;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace CollectionConsoleApp
{
    class TestListCollection
    {
        public void FirstTest()
        {
            Random random = new Random();

            List<int> listOfInts = new List<int>();
            for (int i = 0; i < 5; i++)
            {
                listOfInts.Add(random.Next(1, 11));
            }
            Console.WriteLine("Lista int'ów:");
            foreach (int element in listOfInts)
            {
                Console.Write(element + ", ");
            }
            Console.WriteLine();

            List<double> listOfDoubles = new List<double>();
            for (int i = 0; i < 5; i++)
            {
                double number = random.NextDouble() * 10 + 1;
                number = Math.Round(number, 4);

                listOfDoubles.Add(number);
            }
            Console.WriteLine("Lista double'ów:");
            foreach (double element in listOfDoubles)
            {
                Console.Write(element + ", ");
            }
            Console.WriteLine();

            //int max = MaxFromInts(listOfInts);
            //int max = MaxFromAllTypes<int>(listOfInts, CheckInt);
            int max = MaxFromAllTypes<int>(listOfInts,
                (int firstNumber, int secondNumebr) =>
                {
                    return firstNumber > secondNumebr;
                });
            Console.WriteLine("Max w liście int'ów: " + max);

            //double maxDouble = MaxFromDoubles(listOfDoubles);
            double maxDouble = MaxFromAllTypes<double>(listOfDoubles, (double firstNumber, double secondNumber) => firstNumber > secondNumber);
            Console.WriteLine("Max w liście double'ów: " + maxDouble);

            List<int> newListOfInts = GetNewColletion<int>(listOfInts, x => { return x > 5; });
            Console.WriteLine("Lista intów wiekszych od 5");
            foreach (int item in newListOfInts)
            {
                Console.Write(item + ", ");
            }
            Console.WriteLine();

            Console.WriteLine("Max w liście double'ów: " + maxDouble);

            newListOfInts = GetNewColletion<int>(listOfInts, x => x % 2 == 0);
            newListOfInts = listOfInts.Where(x => x % 2 == 0).ToList();
            Console.WriteLine("Lista intów parzystych");
            foreach (int item in newListOfInts)
            {
                Console.Write(item + ", ");
            }
            Console.WriteLine();

            newListOfInts = GetNewColletion<int>(listOfInts, x => x >= 5 && x <= 10);
            Console.WriteLine("Lista intów parzystych");
            foreach (int item in newListOfInts)
            {
                Console.Write(item + ", ");
            }
            Console.WriteLine();
        }

        private int MaxFromInts(List<int> list)
        {
            int max = list[0];
            foreach (int item in list)
            {
                if (item > max)
                    max = item;
            }
            return max;
        }

        private double MaxFromDoubles(List<double> list)
        {
            double max = list[0];
            foreach (double item in list)
            {
                if (item > max)
                    max = item;
            }
            return max;
        }

        private T MaxFromAllTypes<T>(List<T> list, Func<T, T, bool> check)
        {
            T max = list[0];
            foreach (T item in list)
            {
                /* if (item is int)
                 {
                     if (CheckInt(int.Parse(item.ToString()), int.Parse(max.ToString())))
                         max = item;
                 }
                 if (item is double)
                 {
                     if (CheckDouble(double.Parse(item.ToString()), double.Parse(max.ToString())))
                         max = item;
                 }

                 /*if (item is Person)
                 {
                     if (CheckPerson(item as Person, max as Person))
                         max = item;
                 }


                 if (item > max)
                     max = item;*/
                if (check(item , max))
                    max = item;
            }
            return max;
        }
        private bool CheckInt(int firstNumber, int secondNumber)
        {
            return firstNumber > secondNumber;
        }

        private bool CheckDouble(double firstNumber, double secondNumber)
        {
            return firstNumber > secondNumber;
        }
        /*Private  Person CheckPerson (Person(firstPErson, secondPerson))
     {
    return firstPerson.age > secondPerson.age

    }
    */
        public List<T> GetNewColletion<T>(List<T> list, Func<T, bool> check)
        {
            List<T> newColletion = new List<T>();
            foreach (T item in list)
            {
                if (check(item))
                    newColletion.Add(item);
            }
            return newColletion;
        }
    }
    
}
