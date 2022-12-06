using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CollectionConsoleApp
{
    class Person
    {
        public string name;
        public string surename;
        public int age;

        public Person(string name, string surename, int age)
        {
            this.name = name;
            this.surename = surename;
            this.age = age;
        }

        public void Info()
        {
            Console.WriteLine(name + " " + surename + " " + age + "Lat");
        }
    }
}
