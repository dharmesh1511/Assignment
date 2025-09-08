#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display personal details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;

public:
    Student(string n, int a, string c) : Person(n, a) {
        course = c;
    }

    void showStudent() {
        cout << "Student Details:\n";
        display(); // Reusing base class function
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a) {
        subject = s;
    }

    void showTeacher() {
        cout << "Teacher Details:\n";
        display(); // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student student("Dharmesh", 20, "Computer Science");
    Teacher teacher("hardik", 45, "Mathematics");

    student.showStudent();
    cout << endl;
    teacher.showTeacher();

    return 0;
}
