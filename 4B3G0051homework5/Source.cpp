#include "Header.h"
#include <iostream>

Person::Person(int _id, std::string _lastName, std::string _firstName,
    char _gender, std::string _birthDate) {
    id = _id;
    lastName = _lastName;
    firstName = _firstName;
    gender = _gender;
    birthDate = _birthDate;
}

void Person::display() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << lastName << " " << firstName << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
}