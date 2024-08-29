#include <iostream>
#include <set>
#include <string>

class Person {
    
    public:
    std::string name;
    int age;

    Person(std::string name, int age) : name(name), age(age) {}

    
};

struct PersonComparator {
    bool operator()(const Person& p1, const Person& p2) const {
        // Sort primarily by age, then by name
        if (p1.age == p2.age) {
            return p1.name < p2.name;
        }
        return p1.age < p2.age;
    }
};


int main() {
   

    // Create a set of Person objects, ordered by the comparator function
    std::set<Person, PersonComparator> people;

    // Add some persons to the set
     
    people.insert(Person("Alice", 30));
    people.insert(Person("Bob", 25));
    people.insert(Person("Charlie", 35));

    // Iterate and print the set (ordered by age)
    std::cout << "Set ordered by age:" << std::endl;
    for (const auto& person : people) {
        std::cout << person.name << " (" << person.age << ")" << std::endl;
    }

   

    return 0;
}
