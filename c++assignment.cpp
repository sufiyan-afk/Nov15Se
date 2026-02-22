Module #3 Introduction to OOPS Programming

1.	Introduction to C++
LAB EXERCISES:
1.	First C++ Program: Hello World
 o Write a simple C++ program to display "Hello, World!".
 o Objective: Understand the basic structure of a C++ program, including #include, main(), and cout.
#include <iostream>   

using namespace std;

int main()            
{
    cout << "Hello, World!";   
    return 0;                
}
✅ Explanation of Basic Structure
1️⃣ #include <iostream>
•	It is a preprocessor directive.
•	It tells the compiler to include the input-output stream library.
•	Needed to use cout and cin.
2️⃣ using namespace std;
•	Allows us to use standard names like cout without writing std::cout.
3️⃣ int main()
•	The main function is the starting point of every C++ program.
•	The program execution begins from here.
4️⃣ cout
•	Used to display output on the screen.
•	<< is the insertion operator.
5️⃣ return 0;
•	Ends the program.
•	0 means the program executed successfully.

2.	Basic Input/Output
 o Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.
 o Objective: Practice input/output operations using cin and cout.
#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << name << "! You are " << age << " years old.";

    return 0;
}
✅ Explanation
1️⃣ string name;
•	Stores the user’s name.
2️⃣ int age;
•	Stores the user’s age.
3️⃣ cout
•	Used to display messages on the screen.
4️⃣ cin
•	Used to take input from the user.
5️⃣ << and >>
•	<< → Output operator
•	>> → Input operator


3.	POP vs. OOP Comparison Program 
o Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the same task.
 o Objective: Highlight the difference between POP and OOP approaches
Pop - #include <iostream>
using namespace std;
int main()
{
    float length, breadth, area;
    cout << "Enter length and breadth: "
  cin >> length >> breadth;

    area = length * breadth;

    cout << "Area of rectangle = " << area;

    return 0;
}
Oop – 
#include <iostream>
using namespace std;

class Rectangle
{
public:
    float length, breadth;

    float calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r;

    cout << "Enter length and breadth: ";
    cin >> r.length >> r.breadth;

    cout << "Area of rectangle = " << r.calculateArea();

    return 0;
}
POP	OOP
Function-based	Class-based
Data & functions separate	Data & functions together
Less secure	More secure (encapsulation)

4.	Setting Up Development Environment
 o Write a program that asks for two numbers and displays their sum. Ensure this is done after setting up the IDE (like Dev C++ or CodeBlocks). 
o Objective: Help students understand how to install, configure, and run programs inan IDE.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Sum = " << sum;

    return 0;
}
✅ Steps to Run in IDE (Dev C++ / CodeBlocks)
1️⃣ Install the IDE (Dev C++ or CodeBlocks).
2️⃣ Open IDE → Click File → New → Source File.
3️⃣ Paste the program code.
4️⃣ Save the file with .cpp extension.
5️⃣ Click Compile & Run.
6️⃣ Enter two numbers → Output will display the sum.
✅ Steps to Run in IDE (Dev C++ / CodeBlocks)
1️⃣ Install the IDE (Dev C++ or CodeBlocks).
2️⃣ Open IDE → Click File → New → Source File.
3️⃣ Paste the program code.
4️⃣ Save the file with .cpp extension.
5️⃣ Click Compile & Run.
6️⃣ Enter two numbers → Output will display the sum.

THEORY EXERCISE:

1.What are the key differences between Procedural Programming and ObjectOrientedProgramming (OOP)?

Procedural Programming (POP)	Object-Oriented Programming (OOP)
Based on functions/procedures	Based on objects and classes
Data and functions are separate	Data and functions are combined together
Follows top-down approach	Follows bottom-up approach
Less data security	More secure due to encapsulation
Suitable for small programs	Suitable for large & complex programs
Example: C	Example: C++, Java

2.	List and explain the main advantages of OOP over POP.
Main Advantages of OOP over POP
1️⃣ Encapsulation (Data Security)
•	Data and functions are combined in a class.
•	Data can be hidden using access specifiers (private/public).
•	Prevents unauthorized access.
2️⃣ Data Hiding
•	Sensitive data is protected from direct modification.
•	Improves security compared to POP.
3️⃣ Code Reusability
•	Using inheritance, one class can reuse properties of another.
•	Reduces code duplication.
4️⃣ Modularity
•	Program is divided into small objects.
•	Easy to manage and debug.
5️⃣ Polymorphism
•	Same function name can perform different tasks.
•	Makes code flexible and scalable.
6️⃣ Easy Maintenance
•	Suitable for large and complex programs.
•	Changes in one class do not affect the whole program.
3.	Explain the steps involved in setting up a C++ development environment.
Install a C++ Compiler
•	Download and install a compiler like MinGW (for Windows)
•	A compiler converts C++ code into executable machine code.
2️⃣ Install an IDE (Integrated Development Environment)
•	Install an IDE such as Dev C++, CodeBlocks, or Visual Studio.
•	IDE helps in writing, compiling, and running programs easily.
3️⃣ Configure the Compiler
•	During installation, ensure the compiler is properly linked with the IDE.
•	In CodeBlocks, choose the compiler (e.g., GNU GCC Compiler).
4️⃣ Create a New Project or Source File
•	Open IDE → Click File → New → Source File / Project
•	Save file with .cpp extension.
5️⃣ Write the Program
•	Type your C++ code in the editor window.
6️⃣ Compile the Program
•	Click Compile to check for errors.
•	If errors exist, correct them.
7️⃣ Run the Program
•	Click Run or Compile & Run.
•	Output will be displayed in the console window.

4.	What are the main input/output operations in C++? Provide examples.
1️⃣ Output Operation – cout
•	Used to display data on the screen.
•	Uses the insertion operator (<<).
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    return 0;
}

2️⃣ Input Operation – cin
•	Used to take input from the user.
•	Uses the extraction operator (>>).
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num;
    return 0;
}

2. Variables, Data Types, and Operators
LAB EXERCISES:

1.	Variables and Constants 
o Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them. 
o Objective: Understand the difference between variables and constants
#include <iostream>
using namespace std;

int main()
{
    // Variables (can change)
    int age = 20;
    float price = 99.5;
    char grade = 'A';
    string name = "Ali";

    // Constant (cannot change)
    const float PI = 3.14;

    // Performing operations
    float area = PI * 5 * 5;   // Area of circle (radius = 5)
    float total = 2 * price;   // Total price for 2 items

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Area of Circle: " << area << endl;
    cout << "Total Price: " << total << endl;

    return 0;
}
Explanation:
🔸 Variables:
•	Used to store data.
•	Value can be changed during program execution.
•	Examples: int, float, char, string.
🔸 Constants:
•	Declared using const keyword.
•	Value cannot be changed once assigned.
•	Example: const float PI = 3.14;

2.	Type Conversion
 o Write a C++ program that performs both implicit and explicit type conversions and prints the results. 
o Objective: Practice type casting in C++.
1️⃣ Implicit Type Conversion (Automatic)
•	Done automatically by the compiler.
•	Converts smaller data type to larger data type.

#include <iostream>
using namespace std;

int main()
{
    // Implicit Conversion
    int num1 = 10;
    float num2 = 5.5;
    float result1;

    result1 = num1 + num2;  // int automatically converts to float
    cout << "Implicit Conversion Result: " << result1 << endl;

    // Explicit Conversion (Type Casting)
    float num3 = 9.8;
    int result2;

    result2 = (int)num3;   // manually converting float to int
    cout << "Explicit Conversion Result: " << result2 << endl;

    return 0;
}

2️⃣ Explicit Type Conversion (Type Casting)
•	Done manually by the programmer.
•	Syntax: (datatype) variable
int x = (int)9.8;   // Converts 9.8 to 9

3.	Operator Demonstration
 o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results. 
o Objective: Reinforce understanding of different types of operatorsin C++.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b < 0) : " << (a > 0 || b < 0) << endl;
    cout << "!(a > b) : " << !(a > b) << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}

THEORY EXERCISE:
1.What are the different data types available in C++? Explain with examples.

C++ data types are mainly divided into three categories:
🔹 A) Basic (Primitive) Data Types
Data Type	Description	Example
int	Stores whole numbers	int age = 20;
float	Stores decimal numbers	float price = 99.5;
double	Stores large decimal numbers	double pi = 3.14159;
char	Stores single character	char grade = 'A';
bool	Stores true/false	bool isPass = true;
________________________________________
🔹 B) Derived Data Types
•	Array → int arr[5];
•	Pointer → int *ptr;
•	Function → int sum(int a, int b);
________________________________________
🔹 C) User-Defined Data Types
•	struct
•	union
•	enum
•	class
Example:
struct Student {
    int roll;
    char name[20];
};


2. Explain the difference between implicit and explicit type conversion in C++.

Implicit	Explicit
Automatic	Manual
Safe conversion	May cause data loss
No syntax needed	Uses (type)


4.	What are the different types of operators in C++? Provide examples of each.
🔹 1. Arithmetic Operators
+ - * / %
Example:
int a = 10, b = 5;
cout << a + b;
________________________________________
🔹 2. Relational Operators
== != > < >= <=
Example:
cout << (a > b);
________________________________________
🔹 3. Logical Operators
&& || !
Example:
cout << (a > 0 && b > 0);
________________________________________
🔹 4. Assignment Operators
= += -= *= /=
Example:
a += 5;  // a = a + 5
________________________________________
🔹 5. Bitwise Operators
& | ^ ~ << >>
Example:
cout << (a & b);
________________________________________
🔹 6. Increment/Decrement
++ --
Example:
a++;




4.Explain the purpose and use of constants and literals in C++.
🔹 Constants
•	Fixed values
•	Cannot be changed during program execution
•	Declared using const
Example:
const float PI = 3.14;
If you try to change PI → ❌ Error
________________________________________
🔹 Literals
Literals are fixed values written directly in code.
Types of Literals:
Type	Example
Integer Literal	10
Float Literal	3.14
Character Literal	'A'
String Literal	"Hello"
Boolean Literal	true
Example:
cout << "Welcome";   // "Welcome" is a string litera




3. Control Flow Statements
LAB EXERCISES:

1.	Grade Calculator
o Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions. 
o Objective: Practice conditional statements(if-else).


#include <iostream>
using namespace std;

int main() {
    float marks;

    cout << "Enter student's marks (0 - 100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0) {
        cout << "Grade: F (Fail)" << endl;
    }
    else {
        cout << "Invalid marks entered!" << endl;
    }

    return 0;
}

2.	Number Guessing Game 
 o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts. 
o Objective: Understand while loops and conditional logic.

#include <iostream>
#include <cstdlib>   // for rand()
#include <ctime>     // for time()
using namespace std;

int main() {
    int guess, number, attempts = 0;

    // Generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "🎉 Congratulations! You guessed the number in "
                 << attempts << " attempts." << endl;
            break;  // exit loop when correct
        }
    }

    return 0;
}

3.	Multiplication Table
 o Write a C++ program to display the multiplication table of a given number using a for loop. 
o Objective: Practice using loops.
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":\n";

    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

4.	Nested Control Structures 
o Write a program that prints a right-angled triangle using stars(*) with a nested loop.
 o Objective: Learn nested control structures.
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {        // Outer loop (rows)
        for(int j = 1; j <= i; j++) {       // Inner loop (stars)
            cout << "* ";
        }
        cout << endl;  // Move to next line after each row
    }

    return 0;
}


THEORY EXERCISE:
1.What are conditional statements in C++? Explain the if-else and switch statement.
Conditional statements are used to make decisions in a program.
They execute different blocks of code based on a condition (true/false).
________________________________________
🔹 (A) if-else Statement
Used when we want to check conditions.
🔸 Syntax:
if(condition) {
    // code if true
}
else {
    // code if false
}
🔸 Example:
#include <iostream>
using namespace std;

int main() {
    int num = 10;

    if(num > 0) {
        cout << "Number is positive";
    } else {
        cout << "Number is negative";
    }

    return 0;
}
✅ If condition is true → first block runs
❌ If false → else block runs
________________________________________
🔹 (B) switch Statement
Used when we need to compare one variable with multiple values.
🔸 Syntax:
switch(variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
🔸 Example:
int day = 2;

switch(day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    default:
        cout << "Invalid day";
}
📌 break stops execution after a case.

 2. What is the difference between for, while, and do-while loops in C++? 
Loops are used to repeat a block of code.
Feature	for loop	while loop	do-while loop
Condition Check	Before execution	Before execution	After execution
Minimum Execution	0 times	0 times	At least 1 time
Best Used When	Number of iterations known	Condition-based repetition	Must run at least once

3. How are break and continue statements used in loops? Provide examples.
🔹 break
•	Immediately exits the loop.
Example:
for(int i = 1; i <= 5; i++) {
    if(i == 3)
        break;
    cout << i << " ";
}
Output: 1 2
________________________________________
🔹 continue
•	Skips current iteration and moves to next.
Example:
for(int i = 1; i <= 5; i++) {
    if(i == 3)
        continue;
    cout << i << " ";
}
Output: 1 2 4 5

4.Explain nested control structures with an example.
Nested control structure means one control statement inside another.
Example: Loop inside loop.
________________________________________
🔹 Example: Printing a Triangle
for(int i = 1; i <= 3; i++) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
Output:
*
* *
* * *
Outer loop → controls rows
Inner loop → controls columns
5.	Functions and Scope
LAB EXERCISES:
1.	Simple Calculator Using Functions
 o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input. o Objective: Practice defining and using functions in C++.
#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if(b != 0)
        return a / b;
    else {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(choice) {
        case 1:
            cout << "Result: " << add(num1, num2);
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2);
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2);
            break;
        case 4:
            cout << "Result: " << divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}

2.	Factorial Calculation Using Recursion 
o Write a C++ program that calculates the factorial of a number using recursion. 
o Objective: Understand recursion in functions.
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base case
    if(n == 0 || n == 1)
        return 1;
    
    // Recursive case
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << "Factorial of " << num << " is " << factorial(num);
    }

    return 0;
}

3.	Variable Scope 
o Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.
 o Objective: Reinforce the concept of variable scope.
#include <iostream>
using namespace std;

// Global variable
int x = 100;

void display() {
    // Local variable inside display()
    int x = 50;  

    cout << "Inside display() function:" << endl;
    cout << "Local x = " << x << endl;        // Refers to local variable
    cout << "Global x = " << ::x << endl;     // Refers to global variable
}

int main() {
    // Local variable inside main()
    int y = 20;

    cout << "Inside main() function:" << endl;
    cout << "Global x = " << x << endl;   // Accessing global variable
    cout << "Local y = " << y << endl;

    display();  // Calling function

    return 0;
}

THEORY EXERCISE: 
1.What is a function in C++? Explain the concept of function declaration, definition, and calling. 
A function is a block of code that performs a specific task.
It helps in:
•	Code reusability
•	Reducing repetition
•	Improving readability
•	Dividing large programs into smaller parts
________________________________________
🔹 (A) Function Declaration
Also called function prototype.
It tells the compiler about:
•	Function name
•	Return type
•	Parameters
Example:
int add(int, int);
________________________________________
🔹 (B) Function Definition
Contains the actual code of the function.
Example:
int add(int a, int b) {
    return a + b;
}
________________________________________
🔹 (C) Function Calling
Calling means executing the function.
Example:
int result = add(5, 3);

2. What is the scope of variables in C++? Differentiate between local and global scope. 
Scope means the area of the program where a variable can be accessed.
________________________________________
🔹 Local Scope
•	Declared inside a function or block.
•	Accessible only within that function/block.
Example:
void func() {
    int x = 10;  // Local variable
}
________________________________________
🔹 Global Scope
•	Declared outside all functions.
•	Accessible throughout the program.
Example:
int x = 100;  // Global variable
Feature	Local Variable	Global Variable
Declaration	Inside function	Outside all functions
Accessibility	Only within function	Entire program
Lifetime	Exists during function execution	Exists throughout program

3.Explain recursion in C++ with an example. 
Recursion is a process where a function calls itself to solve a problem.
A recursive function must have:
•	✔ Base case (stopping condition)
•	✔ Recursive case (function calling itself)
________________________________________
📌 Example: Factorial Using Recursion
int factorial(int n) {
    if(n == 0)
        return 1;       // Base case
    else
        return n * factorial(n - 1);   // Recursive case
}

4.What are function prototypes in C++? Why are they used?
A function prototype is a declaration of a function before main().
It informs the compiler about:
•	Function name
•	Return type
•	Number and type of parameters.

4.	Arrays and Strings
LAB EXERCISES:
1.	Array Sum and Average
 o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
 o Objective: Understand basic array manipulation.
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];   // Declaring array
    int sum = 0;

    // Input elements
    cout << "Enter " << size << " elements:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];   // Adding elements to sum
    }

    // Calculating average
    double average = (double)sum / size;

    // Displaying results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

2.	Matrix Addition 
o Write a C++ program to perform matrix addition on two 2x2 matrices.
 o Objective: Practice multi-dimensional arrays.
#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    cout << "Enter elements of first 2x2 matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second 2x2 matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant Matrix after Addition:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


3.String Palindrome Check 
o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards). 
o Objective: Practice string operations.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();

    // Compare characters from start and end
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}


THEORY EXERCISE: 
1.	What are arrays in C++? Explain the difference between single-dimensional and multi-dimensional arrays.
Array is a collection of elements of same data types stored in contiguous memory location.
Diffrence betn single dimensional and multi dimentsional arrays:
Feature	1D Array	2D Array
Structure	Single row	Rows and columns
Index	One index	Two indices
Example	arr[5]	arr[2][2]
Usage	List of values	Matrix/table

2.	Explain string handling in C++ with examples.
In C++, strings can be handled in two ways:
🔹 (A) Using Character Arrays (char[])
char name[] = "Hello";
🔹 (B) Using string Class (Recommended)
#include <string>
string name = "Hello";

Example :
Example:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    cout << str;
}

3.	How are arrays initialized in C++? Provide examples of both 1D and 2D arrays. 
🔹 1D Array Initialization
Method 1:
int arr[5] = {1, 2, 3, 4, 5};
Method 2 (Size automatically determined):
int arr[] = {10, 20, 30};
Method 3 (Partial initialization):
int arr[5] = {1, 2};  // Remaining elements become 0
________________________________________
🔹 2D Array Initialization
Method 1:
int matrix[2][2] = {
    {1, 2},
    {3, 4}
};
Method 2:
int matrix[2][2] = {1, 2, 3, 4};

4.	Explain string operations and functions in C++.
common string functions (using string class):
Function	Description
length()	Returns length of string
size()	Same as length
append()	Adds text at end
+	Concatenation
substr()	Extracts part of string
find()	Finds position of substring
compare()	Compares two strings


5.	Introduction to Object-Oriented Programming
LAB EXERCISES:
1.	Class for a Simple Calculator
 o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions.
 o Objective: Introduce basic classstructure.

#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;   // Create object of Calculator class
    double num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2);
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2);
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2);
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}

2.	Class for Bank Account
 o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private. 
o Objective: Understand encapsulation in classes.
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // Private data member (Encapsulation)

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Function to display balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);   // Create object with initial balance

    account.displayBalance();
    account.deposit(500);
    account.withdraw(300);
    account.displayBalance();

    return 0;
}

3.	Inheritance Example
 o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance. 
o Objective: Learn the concept of inheritance.
#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
private:
    int rollNumber;

public:
    void setStudentDetails(string n, int a, int r) {
        setPersonDetails(n, a);   // Reusing base class function
        rollNumber = r;
    }

    void displayStudentDetails() {
        displayPersonDetails();   // Reusing base class function
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class 2
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s) {
        setPersonDetails(n, a);   // Reusing base class function
        subject = s;
    }

    void displayTeacherDetails() {
        displayPersonDetails();   // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setStudentDetails("Alice", 20, 101);
    t.setTeacherDetails("Mr. Smith", 40, "Mathematics");

    cout << "Student Details:\n";
    s.displayStudentDetails();

    cout << "\nTeacher Details:\n";
    t.displayTeacherDetails();

    return 0;
}

THEORY EXERCISE: 
1.	Explain the key concepts of Object-Oriented Programming (OOP).
Object-Oriented Programming (OOP) is a programming paradigm based on objects and classes.
🔹 Main Concepts of OOP:
1️⃣ Encapsulation
Binding data and functions together in a single unit (class) and restricting direct access to data.
2️⃣ Abstraction
Hiding implementation details and showing only essential features.
3️⃣ Inheritance
Acquiring properties and behaviors of one class into another class.
4️⃣ Polymorphism
Ability of a function or operator to behave differently in different situations.

2.	What are classes and objectsin C++? Provide an example. 
🔹 Class
A class is a blueprint or template for creating objects.
It contains data members (variables) and member functions (methods).
🔹 Object
An object is an instance of a class.
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void show() {
        cout << "Brand: " << brand;
    }
};

int main() {
    Car c1;        // Object creation
    c1.brand = "Toyota";
    c1.show();
}
3.	What is inheritance in C++? Explain with an example. 
Inheritance is a mechanism where one class (derived class) acquires properties and methods of another class (base class).
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();   // Inherited function
    d.bark();
}
4.	What is encapsulation in C++? How isit achieved in classes?
Encapsulation is the process of wrapping data and functions into a single unit (class) and restricting direct access to data.
It is achieved using:
•	private
•	public
•	protected access specifiers
#include <iostream>
using namespace std;

class Bank {
private:
    double balance;   // Hidden data

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Bank b1;
    b1.setBalance(1000);
    cout << b1.getBalance();
}

--------------------------------------------------------------------------------------------------------------------------------------




