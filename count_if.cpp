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

struct IsWithinAgeRange {
    int minAge, maxAge;

    IsWithinAgeRange(int minAge, int maxAge) : minAge(minAge), maxAge(maxAge) {}

    bool operator()(const Person& p) const {
        return p.age >= minAge && p.age <= maxAge;
    }
};
int main() {
    std::vector<Person> people = {
        Person("Alice", 30),
        Person("Bob", 25),
        Person("Charlie", 30),
        Person("David", 20)
    };

    auto it = std::count_if(people.begin(), people.end(), IsWithinAgeRange(20,30));
   std::cout << it << std::endl;
}
