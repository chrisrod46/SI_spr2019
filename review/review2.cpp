// CPSC 131 SI: Review Exercise 2
// 1. Instantiate a Student object in the heap.
// 2. Complete the functions that allow a user to populate the values
//    within the struct and displays the student object passed in.
#include <iostream>
#include <string>

struct Student {
    int cwid;
    std::string first, last;
    int num_courses;
    std::string courses[10];
};

// This function populates the fields of the student object from user
// input into the student object passed in as an argument.
Student* populate_fields(Student* x) {
    // TO BE COMPLETED
    
    return x;
}

// Displays the student object passed in.
void display_student(Student* x) {
    // TO BE COMPLETED
}

int main() {
    // Declare a Student object in the heap
    Student* student1 = new Student;

    // Call the functions that were completed
    
    
    cout << "Enter first name: ";
    cin >> first endl;
    student1->
    
    cout << "Enter last name: ";
    cin >> last endl;

    return 0;
}
