#ifndef GROUPROSTER_HPP
#define GROUPROSTER_HPP

#include "Student.hpp"
#include <iostream>
#include <string>
#include <sstream>

class GroupRoster {
private:
    MemberNode* head;
    MemberNode* tail;

public:
    // Constructor
    GroupRoster() : head(nullptr), tail(nullptr) {}

    // Destructor (placeholder for Part 2)
    ~GroupRoster() {
        // Placeholder for memory cleanup
    }

    // Method to add a member to the linked list
    void addMember(Student* student) {
        MemberNode* newNode = new MemberNode(student);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Method to print the roster
    std::string printRoster() {
        std::stringstream ss;
        MemberNode* current = head;
        while (current != nullptr) {
            ss << *(current->data) << std::endl;
            current = current->next;
        }
        return ss.str();
    }

    // Method to check if the list is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Method to return the size of the list
    int size() {
        int count = 0;
        MemberNode* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};

#endif // GROUPROSTER_HPP

