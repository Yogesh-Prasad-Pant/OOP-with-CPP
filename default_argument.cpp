#include <iostream>
using namespace std;

/*
    DEFAULT ARGUMENT FUNCTION

    This function displays a welcome message to a user.
    If no value is passed, it uses the default value 7.
*/

void welcome( int name = 7) {
    cout << "Welcome, " << name << "!" << endl;
}

int main() {
    // Calling function without argument - default value will be used
    welcome();  // Output: Welcome, 7!

    // Calling function with argument - passed value will be used
    welcome(5);  // Output: Welcome, 5!

    return 0;
}
