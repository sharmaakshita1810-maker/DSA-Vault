#include <iostream>
using namespace std;
int main() {
    int age = 21; // declare an integer variable 'age' 
    float gpa = 3.8; // declare a float variable 'gpa'
    char grade = 'A'; // declare a char variable 'grade'
    double pi = 3.14159; // declare a double variable 'pi'
    bool isPassed = true; // declare a boolean variable 'isPassed'

    //output the values of the variables
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl; 
    cout << "Grade: " << grade << endl;
    cout << "Value of Pi: " << pi << endl;
    cout << "Passed: " << (isPassed ? "Yes" : "No") << endl;

    //size of various data types
    cout << "Size of int: " << sizeof(age) << " bytes" << endl;
    cout << "Size of float: " << sizeof(gpa) << " bytes" << endl;
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;
    cout << "Size of double: " << sizeof(pi) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(isPassed) << " bytes" << endl;


    return 0; // indicate that the program ended successfully
}        
