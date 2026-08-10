# 💻 C++ Programs

A collection of C++ programs covering basic concepts, problem-solving, algorithms, and object-oriented programming.

## 📚 Topics Included

* Variables & Data Types
* Operators
* Conditional Statements
* Loops
* Functions
* Arrays
* Strings
* Pointers
* Structures
* Classes & Objects
* Inheritance
* Polymorphism
* File Handling
* Standard Template Library (STL)
* Sorting & Searching
* Pattern Programs
* Basic Algorithms

## 📂 Repository Structure

```text
📁 Cpp-Programs
├── Calculator.cpp
├── Conditional_statemen.cpp
├── If_statemen.cpp
├── README.md
├── Switch.cpp
├── Third.cpp
├── Triangle.cpp
├── arithmetic_operations.cpp
├── ternary_operator.cpp
├── Temperature.cpp
├── While_loop.cpp
├── DO-While - Loop.cpp
├── For_Loop.cpp
├── Break_continue.cpp
├── Squre_game.cpp
├── Random Number.cpp
├── Conditional_statemen.cpp
├── Random_event.cpp
├── Number_Guess.cpp
├── Functions.cpp
├── Function-2.cpp
├── Function--3.cpp
├── Grade_system.cpp
├── Function 4.cpp
├── Full Name.cpp
├── void day()
├── Global_variable.cpp
├── Bank_System.cpp
├──
└── ...
```

## 🛠️ Requirements

* C++17 or later
* Any C++ compiler (GCC, MinGW, MSVC, Clang)

## ▶️ Compile & Run

Compile:

```bash
g++ filename.cpp -o output
```

Run:

### Windows

```bash
output.exe
```

### Linux / macOS

```bash
./output
```

## 🎯 Purpose

This repository is maintained for learning, practice, and improving C++ programming skills. New programs and concepts will be added regularly.



====================================
C++ CHEAT SHEET
====================================

------------------------------------
WHAT IS C++?
------------------------------------
• General-purpose programming language.
• Created by Bjarne Stroustrup (1985),
• Extension of the C language.
• Supports Object-Oriented Programming (OOP).
• Compiled language.
• Fast and memory efficient.

------------------------------------
PROGRAM STRUCTURE
------------------------------------

#include <iostream>

int main()
{
    std::cout << "Hello World!";
    return 0;
}

Explanation:

#include       -> Includes a library.
<iostream>     -> Input & Output library.
int            -> Return type.
main()         -> Program entry point.
{}             -> Code block.
return 0;      -> Program ended successfully.

------------------------------------
COMMENTS
------------------------------------

Single-line

// Comment

Multi-line

/*
Comment
Comment
*/

------------------------------------
DATA TYPES
------------------------------------

Integer

int age = 18;

Floating Point

float price = 10.5f;
double pi = 3.1415926535;

Character

char grade = 'A';

Boolean

bool isOnline = true;

String

std::string name = "ZERO";

Void

void function();

------------------------------------
SIZE OF DATA TYPES
------------------------------------

char        -> 1 Byte
bool        -> 1 Byte
short       -> 2 Bytes
int         -> 4 Bytes
long        -> 4 or 8 Bytes
long long   -> 8 Bytes
float       -> 4 Bytes
double      -> 8 Bytes

Check size:

sizeof(int)

------------------------------------
VARIABLES
------------------------------------

Declaration

int age;

Initialization

int age = 18;

Multiple Variables

int a = 1, b = 2, c = 3;

------------------------------------
CONSTANTS
------------------------------------

const double PI = 3.14159;

Cannot be modified.

------------------------------------
LITERALS
------------------------------------

10          Integer
3.14        Double
3.14f       Float
'A'         Character
"Hello"     String
true        Boolean

------------------------------------
KEYWORDS
------------------------------------

int
float
double
char
bool
void
return
const
if
else
switch
case
default
for
while
do
break
continue
class
struct
public
private
protected
virtual
new
delete
namespace
using
typedef
auto

------------------------------------
NAMESPACE
------------------------------------

std::cout

Using whole namespace

using namespace std;

Using specific object

using std::cout;

Type alias

using text = std::string;

------------------------------------
SCOPE RESOLUTION ::
------------------------------------

std::cout

MyClass::function()

Namespace::variable

------------------------------------
INPUT
------------------------------------

int age;

std::cin >> age;

------------------------------------
OUTPUT
------------------------------------

std::cout << "Hello";

New Line

'\n'

or

std::endl

------------------------------------
OPERATORS
------------------------------------

Arithmetic

+
-
*
/
%

Assignment

=
+=
-=
*=
/=
%=

Comparison

==
!=
>
<
>=
<=

Logical

&&
||
!

Increment

++

Decrement

--

------------------------------------
TYPE CASTING
------------------------------------

Recommended

static_cast<double>(x)

Old

(double)x

------------------------------------
TYPE CONVERSION
------------------------------------

Implicit

int → double

Explicit

static_cast<int>(5.8)

------------------------------------
IF STATEMENT
------------------------------------

if(condition)
{
}

------------------------------------
IF ELSE
------------------------------------

if(condition)
{

}
else
{

}

------------------------------------
ELSE IF
------------------------------------

if()
{

}
else if()
{

}
else
{

}

------------------------------------
SWITCH
------------------------------------

switch(choice)
{
case 1:
    break;

case 2:
    break;

default:
}

------------------------------------
LOOPS
------------------------------------

For

for(int i=0;i<5;i++)
{
}

While

while(condition)
{
}

Do While

do
{

}
while(condition);

------------------------------------
BREAK
------------------------------------

Stops a loop.

------------------------------------
CONTINUE
------------------------------------

Skips current iteration.

------------------------------------
FUNCTIONS
------------------------------------

Declaration

void greet();

Definition

void greet()
{
}

Calling

greet();

------------------------------------
FUNCTION PARAMETERS
------------------------------------

void add(int a, int b)

Arguments

add(5,3);

------------------------------------
RETURN
------------------------------------

int add(int a,int b)
{
    return a+b;
}

------------------------------------
FUNCTION OVERLOADING
------------------------------------

int add(int a,int b)

double add(double a,double b)

Same name.
Different parameters.

------------------------------------
DEFAULT PARAMETERS
------------------------------------

void greet(string name="User")

------------------------------------
VARIABLE SCOPE
------------------------------------

Local

Inside function.

Global

Outside all functions.

------------------------------------
ARRAYS
------------------------------------

int nums[5];

Initialization

int nums[]={1,2,3};

Access

nums[0]

------------------------------------
MULTI-DIMENSIONAL ARRAY
------------------------------------

int matrix[3][3];

------------------------------------
STRINGS
------------------------------------

std::string name;

Length

name.length()

Size

name.size()

Empty

name.empty()

Append

name += "Hello";

Clear

name.clear();

------------------------------------
CHARACTER FUNCTIONS
------------------------------------

toupper()

tolower()

isdigit()

isalpha()

------------------------------------
REFERENCES
------------------------------------

int x=5;

int& ref=x;

------------------------------------
POINTERS
------------------------------------

int x=5;

int* ptr=&x;

Address

&x

Value

*ptr

------------------------------------
DYNAMIC MEMORY
------------------------------------

Allocate

new

Delete

delete

------------------------------------
ENUM
------------------------------------

enum Color
{
RED,
GREEN,
BLUE
};

------------------------------------
STRUCT
------------------------------------

struct Student
{
string name;
int age;
};

------------------------------------
CLASS
------------------------------------

class Car
{
public:

private:

};

------------------------------------
OBJECT
------------------------------------

Car bmw;

------------------------------------
CONSTRUCTOR
------------------------------------

Car()
{

}

Runs automatically when object is created.

------------------------------------
DESTRUCTOR
------------------------------------

~Car()
{

}

Runs automatically when object is destroyed.

------------------------------------
ACCESS MODIFIERS
------------------------------------

public

private

protected

------------------------------------
INHERITANCE
------------------------------------

class Dog : public Animal

------------------------------------
POLYMORPHISM
------------------------------------

Function Overloading

Function Overriding

Virtual Functions

------------------------------------
ENCAPSULATION
------------------------------------

Hiding internal data.

------------------------------------
ABSTRACTION
------------------------------------

Showing only important information.

------------------------------------
FILE HANDLING
------------------------------------

ofstream

ifstream

fstream

------------------------------------
EXCEPTIONS
------------------------------------

try

catch

throw

------------------------------------
STL (Standard Template Library)
------------------------------------

vector

map

set

queue

stack

pair

algorithm

------------------------------------
USEFUL HEADER FILES
------------------------------------

<iostream>
<string>
<vector>
<array>
<cmath>
<cstdlib>
<ctime>
<fstream>
<iomanip>
<algorithm>
<map>
<set>
<queue>
<stack>

------------------------------------
COMMON MATH FUNCTIONS
------------------------------------

sqrt()

pow()

abs()

round()

floor()

ceil()

------------------------------------
COMMON STRING FUNCTIONS
------------------------------------

length()

size()

substr()

find()

replace()

erase()

insert()

compare()

------------------------------------
BEST PRACTICES
------------------------------------

• Prefer std::string over char arrays.
• Prefer '\n' over std::endl unless flushing is needed.
• Use const whenever possible.
• Prefer static_cast over C-style casts.
• Give variables meaningful names.
• Keep functions small.
• Don't use global variables unless necessary.
• Comment why, not what.
• Initialize variables.
• Format your code consistently.

## ⭐ Support

If you find this repository helpful, consider giving it a star.
