#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <vector>

class Person {
public:
    std::string name;
    std::vector<Person*> friends;
    Person(std::string name);
    void befriend(Person* person);
    void unfriend(Person* person);
    void showFriends();
};

#endif