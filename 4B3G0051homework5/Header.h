#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    int id;
    std::string lastName;
    std::string firstName;
    char gender;
    std::string birthDate;

public:
    Person(int _id, std::string _lastName, std::string _firstName,
        char _gender, std::string _birthDate);

    int getId() const { return id; }
    std::string getLastName() const { return lastName; }
    std::string getFirstName() const { return firstName; }
    char getGender() const { return gender; }
    std::string getBirthDate() const { return birthDate; }

    void setId(int _id) { id = _id; }
    void setLastName(std::string _lastName) { lastName = _lastName; }
    void setFirstName(std::string _firstName) { firstName = _firstName; }
    void setGender(char _gender) { gender = _gender; }
    void setBirthDate(std::string _birthDate) { birthDate = _birthDate; }

    void display() const;
};

#endif