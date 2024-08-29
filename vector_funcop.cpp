#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
class Person{
    public:
    std::string name;
    int age;
    
    Person(std::string name,int age): name(name),age(age){};
    
};

//The key part of this struct is the bool operator()(...) const function, which defines how the function call operator () behaves for objects of this type.
//function pointer is bool(*)(...)
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
   
 std::vector<Person> people = {
        Person("Alice", 30),
        Person("Bob", 25),
        Person("Charlie", 30),
        Person("David", 20)
    };
    
    // Sort using custom comparator
    std::sort(people.begin(), people.end(), PersonComparator());

    for (const auto& person : people) {
        std::cout << person.name << " (" << person.age << ")" << std::endl;
    }

    return 0;
}
