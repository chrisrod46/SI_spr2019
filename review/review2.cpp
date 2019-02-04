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
    cout << "Enter CWID : ";
    cin >> cwid endl;
    student1->cwid = cwid;
    
    cout << "Enter first name: ";
    cin >> first endl;
    student1->first = first;
    
    cout << "Enter last name: ";
    cin >> last endl;
    student1->last = last;
    
    cout << "Enter the number of courses: ";
    cin >> num_courses;
    student1->num_courses = num_courses;
    return x;
    
    for(int i=0; i<num_courses; ++i){
        cout << "Course " << i;
        cin >> courses[i] endl;
    }

}

// Displays the student object passed in.
void display_student(Student* x) {
    // TO BE COMPLETED
    cout << "CWID: " << cwid << endl;
    cout << "First Name: " << first << endl;
    cout << "Last Name: " << last << endl;
    cout << "Courses: " << endl;
    
    for(int j=0; j<num_courses; ++j){
        cout<< j <<"." << courses[j] << endl;
    }
}

int main() {
    // Declare a Student object in the heap
    Student* student1 = new Student;

    // Call the functions that were completed
    Student* populate_fields(Student* x) 
    void display_student(Student* x)
    
    return 0;
}
