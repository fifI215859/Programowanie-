using System;
using System.Collections.Generic;
using System.Formats.Asn1;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LotOfTasks
{
    class Exercise
    {
        public void Exercise1()
        {
            float avarange;
            {
                float number1, number2;

                Console.WriteLine("Podaj liczbe");

                number1 = float.Parse(Console.ReadLine());
                number2 = float.Parse(Console.ReadLine());

                avarange = number1 + number2 / 2;
                Console.WriteLine("Srednia arytmetyczna to:" + avarange);

            }
        }
        public void Exercise2()
        {
            float rectangle;
            {
                float sideA;
                float sideB;

                Console.WriteLine("Podaja bok A");
                sideA = float.Parse(Console.ReadLine());
                Console.WriteLine("Podaja bok B");
                sideB = float.Parse(Console.ReadLine());

                rectangle = sideA * sideB;
                Console.WriteLine("Pole prostokatu to:" + rectangle);
            }
        }
        public void Exercise3()
        {
            double stozek;
            {
                double V;
                double r;
                double H;

                Console.WriteLine("Podaja promien");
                r = double.Parse(Console.ReadLine());
                Console.WriteLine("Podaj wysokosc");
                H = double.Parse(Console.ReadLine());

                V = 1/3 * (float)Math.PI * (r * r) * H;

                Console.WriteLine("Pole stozka to:" + V);
            }
            
        }
        public void Exercise4()
        {
            float circle;
            {
                float r;
                float area;

                Console.WriteLine("Podaja promien");
                r = float.Parse(Console.ReadLine());

                area = (float)Math.PI * (r * r);
                Console.WriteLine("Pole kola to:" + area);
            }
        }
        public void Exercise5()
        {
            float a, b;
            float sumaPoteg;

            Console.WriteLine("Podaja a");
            a = float.Parse(Console.ReadLine());
            Console.WriteLine("Podaja b");
            b = float.Parse(Console.ReadLine());

            sumaPoteg = (a * a) + (b * b);
            Console.WriteLine("Pole kola to:" + sumaPoteg);

        }
    }
}
