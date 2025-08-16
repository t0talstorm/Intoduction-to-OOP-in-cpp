# EXPERIMENT - 11 - INTRODUCTION TO OBJECT-ORIENTED PROGRAMMING (OOP) IN C++

## Aim: To study and implement the fundamental concepts of Object-Oriented Programming in C++, including classes, objects, encapsulation, data members, and member functions.

## Apparatus: VS Code or Online C++ Compiler

## Theory:

**Object-Oriented Programming (OOP)** is a programming paradigm that organizes software design around data, or objects, rather than functions and logic. C++ is a powerful object-oriented programming language that supports the four pillars of OOP: **Encapsulation**, **Inheritance**, **Polymorphism**, and **Abstraction**.

### Key Concepts:

1. **Class**: A class is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data members (variables) and member functions (methods) that operate on that data.
   ```cpp
   class ClassName {
       // Data members and member functions
   };
   ```

2. **Object**: An object is an instance of a class. It represents a real-world entity and can access the class's data members and member functions.
   ```cpp
   ClassName objectName;  // Creating an object
   ```

3. **Data Members**: Variables declared inside a class that store the state or properties of an object.
   ```cpp
   class Student {
       string name;    // Data member
       int age;        // Data member
   };
   ```

4. **Member Functions**: Functions declared inside a class that define the behavior or operations that can be performed on the class data.
   ```cpp
   class Calculator {
       double add() {          // Member function
           return num1 + num2;
       }
   };
   ```

5. **Access Specifiers**: Keywords that define the accessibility of class members:
   - **Public**: Members are accessible from outside the class
   - **Private**: Members are only accessible within the class
   - **Protected**: Members are accessible within the class and its derived classes

6. **Method Definition Outside Class**: Member functions can be defined outside the class using the scope resolution operator (::).
   ```cpp
   class Circle {
       double calculateCircumference();  // Declaration
   };
   
   double Circle::calculateCircumference() {  // Definition outside class
       return 2 * PI * radius;
   }
   ```

### Core OOP Principles Demonstrated:

- **Encapsulation**: Bundling data and methods that operate on that data within a single unit (class)
- **Data Hiding**: Using private access specifiers to restrict direct access to internal data
- **Modularity**: Breaking down complex problems into smaller, manageable classes
- **Reusability**: Creating classes that can be instantiated multiple times with different data
- **Abstraction**: Hiding complex implementation details while exposing only necessary interfaces

### Why OOP Matters:
- **Code Organization**: Better structure and organization of code
- **Reusability**: Classes can be reused across different programs
- **Maintainability**: Easier to modify and debug code
- **Scalability**: Easier to expand and enhance functionality
- **Real-world Modeling**: Natural way to represent real-world entities

## Programs:

### 1. Student Information Management System

---

**File:** `student-info.cpp`  
**Experiment ID:** 11A

**Description:** Demonstrates basic class creation with public data members and object instantiation. Creates a system to store and display student information using arrays of objects.

**Algorithm:**
1. Define a `Students` class with public data members (Name, Branch, Subject, Year, Result)
2. Create an array of Student objects to store multiple records
3. Use a loop to input student details for each object
4. Store the input data in corresponding object properties
5. Display all stored student information using another loop
6. Demonstrate object array manipulation and data access

---

### 2. Car Details Management System

---

**File:** `car-details.cpp`  
**Experiment ID:** 11B

**Description:** Implements a car information system using classes and objects, demonstrating data encapsulation and object array usage for storing multiple car records.

**Algorithm:**
1. Create a `cars` class with public data members (Brand, Model, Year)
2. Declare an array of car objects for storing multiple car records
3. Implement input validation and data collection in a loop
4. Store car information using object assignment
5. Display all car information with formatted output
6. Demonstrate practical application of object-oriented data storage

---

### 3. Rectangle Area Calculator with Shape Detection

---

**File:** `Rectangle-area.cpp`  
**Experiment ID:** 11C

**Description:** Develops a rectangle area calculation system that demonstrates member functions, conditional logic within methods, and automatic shape detection (square vs rectangle).

**Algorithm:**
1. Define `AreaOfRectangle` class with width and breadth data members
2. Implement `calculateArea()` member function with shape detection logic
3. Use conditional statements to differentiate between square and rectangle
4. Return formatted string with area calculation and shape identification
5. Demonstrate object method calling and data processing
6. Show practical application of member functions with decision-making

---

### 4. Multi-Function Calculator System

---

**File:** `Simple-calculator.cpp`  
**Experiment ID:** 11D

**Description:** Creates a comprehensive calculator class demonstrating multiple member functions, error handling, and mathematical operations using object-oriented approach.

**Algorithm:**
1. Design `Calculator` class with num1 and num2 data members
2. Implement multiple member functions: add(), subtract(), multiply(), divide(), cube()
3. Add error handling for division by zero operations
4. Demonstrate function overloading concepts and method chaining
5. Process user input and perform calculations using object methods
6. Display results for all mathematical operations with proper formatting

---

### 5. Circle Geometry Calculator with External Method Definition

---

**File:** `define-method-outside-class.cpp`  
**Experiment ID:** 11E

**Description:** Demonstrates advanced class concepts including method declaration inside class and definition outside class using scope resolution operator, along with constant usage.

**Algorithm:**
1. Create `Circle` class with radius data member and area calculation method
2. Declare `calculateCircumference()` method inside class
3. Define `calculateCircumference()` method outside class using scope resolution operator (::)
4. Use global constant PI for mathematical accuracy
5. Implement both inline and external method definitions
6. Calculate and display both area and circumference with proper formatting

---

### 6. Cube Volume Calculator with Private Data Members

---

**File:** `pvt-public-vars-in-class.cpp`  
**Experiment ID:** 11F

**Description:** Illustrates data encapsulation using private data members and public member functions, demonstrating the principle of data hiding and controlled access.

**Algorithm:**
1. Define `cube` class with private data members (height, width, length)
2. Initialize private variables with default values
3. Create public `volume()` method to access and process private data
4. Calculate volume using private data members within the public method
5. Demonstrate data hiding by restricting direct access to dimensions
6. Show controlled data access through public interface methods

---

## Key Learning Outcomes:

1. **Class Design Fundamentals**: Understanding how to create and structure classes effectively
2. **Object Instantiation**: Learning to create and manipulate objects from classes
3. **Data Encapsulation**: Implementing data hiding using access specifiers
4. **Member Function Implementation**: Creating both inline and external method definitions
5. **Array of Objects**: Managing multiple objects using arrays for data collection
6. **Access Control**: Understanding public and private access specifiers
7. **Method Definition Techniques**: Learning various ways to define class methods
8. **Real-world Applications**: Implementing practical systems using OOP concepts

## Applications:
- **Database Management Systems**: Storing and managing structured data using objects
- **Game Development**: Creating game entities with properties and behaviors
- **Financial Systems**: Modeling accounts, transactions, and financial calculations
- **Inventory Management**: Tracking products, quantities, and operations
- **Educational Software**: Managing student records, grades, and academic information
- **Geometric Calculations**: Implementing mathematical computations for various shapes
- **Business Applications**: Creating models for employees, customers, and business processes

## Advantages of Object-Oriented Programming:
- **Modularity**: Code is organized into discrete classes and objects
- **Reusability**: Classes can be reused in different contexts and applications
- **Maintainability**: Changes to one class don't affect other parts of the program
- **Scalability**: Easy to add new features by creating new classes or extending existing ones
- **Data Security**: Private members protect data from unauthorized access
- **Code Clarity**: Object-oriented code is often more intuitive and easier to understand