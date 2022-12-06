using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstConsolObjectApp
{
    class Person
    {
        private string name;
        private string surename;
        private int age;


        public Person()
        {
            name = "Jan";
            surename = "Nieznany";
            age = 21;
        }

        public Person(string nmae, string surename, int age)
        {
            this.name = name;
            this.surename = surename;
            this.age = age;
        }
        public void ShowInof()
        {
            Console.WriteLine("Informacje o osobie");
            Console.WriteLine($"Imie: {name}");
            Console.WriteLine($"Nazwisko: {surename}");
            Console.WriteLine($"Wiek: {age}");

        }
    }
}
