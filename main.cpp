#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Creating object pointers for the Student class
    Student* student1 = new Student("Alice", 1);
    Student* student2 = new Student("Bob", 2);
    Student* student3 = new Student("Charlie", 3);

    // Create an instance of the GroupRoster class
    GroupRoster roster;

    // Add students to the roster
    roster.addMember(student1);
    roster.addMember(student2);
    roster.addMember(student3);

    // Print the roster
    std::cout << "Roster:\n" << roster.printRoster() << std::endl;

    // Test edge cases
    GroupRoster emptyRoster;
    std::cout << "Empty roster:\n" << emptyRoster.printRoster() << std::endl;

    // Cleanup memory
    delete student1;
    delete student2;
    delete student3;

    return 0;
}
