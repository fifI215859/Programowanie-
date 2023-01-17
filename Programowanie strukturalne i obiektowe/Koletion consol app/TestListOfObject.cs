using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CollectionConsoleApp
{
    class TestListOfObject
    {
        public void  Test()
        {
            List<Person> listOfPeople = new List<Person>();

            Person person = new Person("Jan", "Kowalski", 40, 156);
            listOfPeople.Add(person);

            listOfPeople.Add(new Person("Ewa", "Nowak", 36, 170));
            listOfPeople.Add(new Person("Paweł", "Nieznany", 17, 150));
            listOfPeople.Add(new Person("Nie", "Znany", 14, 169));

            Console.WriteLine("Lista wzystkich osób");
            foreach (Person p in listOfPeople)
            {
                p.Info();
            }
            Console.WriteLine();

            List<Person> listOfPeoplePegi18;
            /*
             select  * 
            from listOfPeople
            where age >= 18 */
            listOfPeoplePegi18 = listOfPeople.Where(x => x.age >= 18).ToList();

            Console.WriteLine("Lista osob pelnoletnich:");
            foreach (Person p in listOfPeoplePegi18)
            {
                p.Info();
            }
            Console.WriteLine();
            /*
            select  * 
           from listOfPeople
           order by age*/

            //List<Person> sortedListByAge = listOfPeople.OrderBy(x => x.age).ToList();
            List<Person> sortedListByAge = listOfPeople.OrderByDescending(x => x.age)
                .ThenBy(x => x.height)
                //.OrderBy(x => x.height)
                .ToList();
            Console.WriteLine("Lista osob posortowanych:");
            foreach (Person p in sortedListByAge)
            {
                p.Info();
            }
            Console.WriteLine();

            List<Person> sortedByName = listOfPeople.OrderBy(x => x.name).ToList();
            Console.WriteLine("Lista osob posortowanych po imieniu:");
            foreach ( Person p in sortedByName)
            {
                p.Info();
            }
            Console.WriteLine();

            int age = listOfPeople.Min(x => x.age);
            Console.WriteLine("najmłodsza osoba ma wiek: " + age);
        }
    }
}
