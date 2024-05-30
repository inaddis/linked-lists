int main() {
    // Creating object pointers for the Student class
    Student* student1 = new Student("Alice", 1);
    Student* student2 = new Student("Bob", 2);
    Student* student3 = new Student("Charlie", 3);

    // Printing the memory address of one of the object pointers without de-referencing
    std::cout << "Memory address of student1: " << student1 << std::endl;

    // Printing the details of other objects by de-referencing
    std::cout << *student2 << std::endl;
    std::cout << *student3 << std::endl;

    // Cleaning up memory by deleting the object pointers
    delete student1;
    delete student2;
    delete student3;
}
