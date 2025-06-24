
/*
    INLINE FUNCTION IN C++

    Definition:
    An inline function is a function where the compiler attempts to insert the complete function code
    directly at the point of each function call, rather than performing a standard function call.
    This helps to eliminate the overhead caused by function calls.

    Syntax:
        inline return_type function_name(parameters) {
            // Function body
        }

    Example:
        inline int square(int x) {
            return x * x;
        }

    Advantages:
    - Faster execution: Removes function call overhead.
    - Improved readability: Allows short utility functions with better performance.
    - Useful for small, frequently-used functions.

    Disadvantages:
    - Increases binary size (code bloat) due to duplication of code.
    - Compiler may ignore the 'inline' request if:
        - The function has loops or recursion.
        - The function body is too large.
        - The function contains static variables.
    - Not suitable for large or complex functions.

    Notes:
    - The 'inline' keyword is a suggestion, not a command. The compiler decides whether to inline.
    - Best used for short (1-2 line) functions used frequently.
*/
// Inline function example

#include <iostream>
using namespace std;
inline int square(int x) {
    return x * x;
}

int main() {
    int a,b;
    cout<<"enter any two legth of two square ";
    cin>>a>>b;
    cout<< "Square of " << a << " is: " << square(a) << endl;
    cout<< "Square of " << b << " is: " << square(b) << endl;

    return 0;
}


