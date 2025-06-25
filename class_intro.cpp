#include <iostream>
using namespace std;

/*
   
    C++ CLASSES – FULL EXPLANATION

    ➤ What is a Class?
    -------------------
    A class is a user-defined data type in C++ that groups related data and functions
    together. It acts as a blueprint for creating objects.
    class is a collection of similar type of objects.

    ➤ Syntax:
    ----------
    class ClassName{
    access_specifier:
        // Data members (variables)
        // Member functions (methods)
    };

    ➤ Key Terms:
    -------------
    - Class           : Blueprint of objects
    - Object          : Instance of a class
    - Data Members    : Variables defined in a class
    - Member Functions: Functions inside a class
    - Access Specifiers: Control access to members (public, private, protected)

    ➤ Access Specifiers:
    ---------------------
    - public    : Accessible from outside the class
    - private   : Accessible only within the class
    - protected : Like private, but accessible in derived classes

    ➤ Advantages of Using Classes:
    -------------------------------
    ✔ Encapsulation - binds data and function together
    ✔ Abstraction - hides internal details
    ✔ Reusability - code can be reused using inheritance
    ✔ Modularity - separates code into independent units
    ✔ Easy maintenance and readability

    ➤ Example:
    ----------
    A class called Student that has roll number and name as data members,
    and setData() and display() as member functions.
*/

class Student {
private:
    int roll;       // data member (private)
    string name;    // data member (private)
public:
    // Member function to set data
    void setData(int r, string n) {
        roll = r;
        name = n;
    }
    // Member function to display data
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    // Object creation
    Student s1,s2;
    // Accessing public member functions using object
    s1.setData(101, "Yogesh");
    s1.display();
    cout<<endl;
    s2.setData(102,"ram");
    s2.display();
    

    return 0;
}

/*
    ➤ Summary:
    ----------
    - A class groups variables and functions into one unit.
    - Objects access class functionality.
    - Access specifiers control visibility.
    - Classes are foundation of Object-Oriented Programming (OOP).
*/
