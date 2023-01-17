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
        public int height;

        public Person(string name, string surename, int age, int height)
        {
            this.name = name;
            this.surename = surename;
            this.age = age;
            this.height = height;
        }

        public void Info()
        {
            Console.WriteLine(name + " " + surename + " " + age + "lat " + height + "cm");
        }
    }
}
