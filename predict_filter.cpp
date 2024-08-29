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

struct IsOverAge {
    int ageThreshold;
    IsOverAge(int age) : ageThreshold(age) {}

    bool operator()(const Person& p) const {
        return p.age > ageThreshold;
    }
};

int main() {
    std::vector<Person> people = {
        Person("Alice", 30),
        Person("Bob", 25),
        Person("Charlie", 30),
        Person("David", 20)
    };

    auto it = std::find_if(people.begin(), people.end(), IsOverAge(28));
    if (it != people.end()) {
        std::cout << "Found: " << it->name << " (" << it->age << ")" << std::endl;
    } else {
        std::cout << "No person over age 28 found." << std::endl;
    }
}
