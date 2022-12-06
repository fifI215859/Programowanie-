using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace ColletionConsolApp
{
    class TestColletion
    {
        public void TestArrayColletion()
        {
            /*
             c++ typ: nazwa[rozmiar];
            
             int tab1[5];
            
             tab1[2] = 124235;*/

            int[] arrayOfNumbers = new int[10];
            arrayOfNumbers[5] = 2137;
            Random random = new Random();

            for (int i = 0; i < arrayOfNumbers.Length; i++)
            {
                arrayOfNumbers[i] = random.Next() % 100;
            }
            /*for (int i = 0; i < arrayOfNumbers.Length; i++)
            {
             Console.Write(item + ", ");
            }*/

            foreach (var item in arrayOfNumbers)
            {
                Console.Write(item + ", ");
            }
            Console.WriteLine();

            int max = arrayOfNumbers[0];
            foreach (var number in arrayOfNumbers)
            {
                if (number > max)
                    max = number;
            }
            Console.WriteLine("Max liczba to:" + max);
        }
        public void TestObjectArrayColletion()
        {

            Number[] arryWidthObjectNumbers = new Number[5];
            //arryWidthObjectNumbers[2].ourNumber = 7;
            Random random = new Random();

            for (int i = 0; i < arryWidthObjectNumbers.Length; i++)
            {
                arryWidthObjectNumbers[i] = new Number();
                arryWidthObjectNumbers[i].ourNumber = random.Next() % 100;
            }
            foreach (Number number in arryWidthObjectNumbers)
            {
                Console.Write($"{number.ourNumber} ,");
            }

            int max = arryWidthObjectNumbers[0].ourNumber;
            foreach (var number in arryWidthObjectNumbers)
            {
                if (number.ourNumber > max)
                    max = number.ourNumber;
            }
            Console.WriteLine("Max liczba to:" + max);
        }

        public void TestGeneric()
        {
            Number[] numbers = new Number[5];
            NumberFloat[] floatnumbers = new NumberFloat[5];
            NumberDouble[] doublenumbers = new NumberDouble[5];

            NumberGeneric<int> intGenericNumber = new NumberGeneric<int>();
            intGenericNumber.ourNumber = 7;

            NumberGeneric<int>[] IntGenericNumbers = new NumberGeneric<int>[5];
            NumberGeneric<float>[] FloatGenericNumbers = new NumberGeneric<float>[5];
            NumberGeneric<double>[] DoubleGenericNumbers = new NumberGeneric<double>[5];
            NumberGeneric<byte>[] ByteGenericNumbers = new NumberGeneric<byte>[5];

            ByteGenericNumbers[2].ourNumber = 7;
        }

        public void ListColletion()
        {
            int[] tab = new int[10];
            // int tab[] = new int[10];

            List<int> listOfInts = new List<int>();
            Console.WriteLine("Kolekcja na element:" + listOfInts.Count);
            listOfInts.Add(5);
            Console.WriteLine("Kolekcja ma element:" + listOfInts.Count);
            Console.WriteLine("Zerowy element kolekcji:" + listOfInts[0]);
            listOfInts.Add(2137);
            Console.WriteLine("Pirewszy element kolekcji:" + listOfInts[1]);

            for (int i = 0; i < new Random().Next(1, 100); i++)
            {
                listOfInts.Add(new Random().Next(1, 100));
            }

            for (int i = 0; i < listOfInts.Count; i++)
            {
                //listOfInts[i] = 2;
            }
            foreach(int item in listOfInts)
            {
                Console.WriteLine("ELement:" + item);
            }
        }
    }
    class Number
    {
        public int ourNumber;
    }
    class NumberFloat
    {
        public float ourNumber;
    }
    class NumberDouble
    {
        public double ourNumber;
    }
    class NumberGeneric<T>
    {
        public T ourNumber;
    }
}
