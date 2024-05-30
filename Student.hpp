#include <iostream>
#include <string>
#include <sstream>

// Student class representing a group member
class Student {
private:
    std::string name;
    int id;

public:
    // Constructor
    Student(std::string name, int id) : name(name), id(id) {}

    // Overloaded << operator to print Student details
    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Student Name: " << student.name << ", ID: " << student.id;
        return os;
    }
};

// MemberNode struct to represent a node in the linked list
struct MemberNode {
    Student* data;
    MemberNode* next;

    MemberNode(Student* student) : data(student), next(nullptr) {}
};
