#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setData(string n, int a);   // Outer function: declared inside, defined outside the class
    void display();                  // This will be defined as inline outer function
};

// ----------- Function Definitions -----------

// Outer Function:
// This function is defined outside the class using scope resolution operator (::)
// It is not automatically inline unless we explicitly use the 'inline' keyword
void Student::setData(string n, int a) {
    name = n;
    age = a;
}

// Inline Outer Function:
// Even though it's defined outside the class, marking it as 'inline' tells the compiler
// to replace the function call with the actual code (if appropriate)
inline void Student::display() {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    Student s;
    s.setData("Yogesh", 18);  // Calls outer function
    s.display();              // Calls inline outer function
    return 0;
}
