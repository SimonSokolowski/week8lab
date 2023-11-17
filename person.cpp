#include "person.h"
#include <iostream>
#include <vector>
#include <string>

Person::Person(std::string name) {
    this->name = name;
}

void Person::befriend(Person* person) {
    friends.push_back(person);
}

void Person::unfriend(Person* person) {
    for (auto it = friends.begin(); it != friends.end(); ++it) {
        if (*it == person) {
            friends.erase(it);
            break;
        }
    }
}

void Person::showFriends() {
    
    std::cout << "friends are " << std::endl;
    for (Person* i : friends) {
        std::cout << i->name << std::endl;
    }
}

int main() {
    Person person("Greg");
    Person person2("Rodd");
    Person person3("Sodd");

    person.showFriends();
    person.befriend(&person2);
    person.befriend(&person3);
    person.showFriends();
    person.unfriend(&person2);
    person.showFriends();

    return 0;
}