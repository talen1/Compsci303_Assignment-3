**Expression Manager and Queue Implementation**

**Description**

This project contains the implementation of two separate components:

ExpressionManager - A utility for converting infix expressions to postfix notation, ensuring that all parentheses within the expression are balanced.
Queue - A custom implementation of a queue data structure with basic operations like enqueue, dequeue, front, isEmpty, and size.

Files
ExpressionManager.h and ExpressionManager.cpp - Header and implementation files for the ExpressionManager class.
Queue.h and Queue.cpp - Header and implementation files for the Queue class.
main.cpp - The entry point of the program that demonstrates the usage of both ExpressionManager and Queue.
Compilation and Running
The project can be compiled using any standard C++ compiler that supports C++11 or later. For example, to compile the project with g++, you can use the following command:

Compilation and Running
The project can be compiled using any standard C++ compiler that supports C++11 or later. For example, to compile the project with g++, you can use the following command:

g++ -std=c++11 main.cpp ExpressionManager.cpp Queue.cpp -o expression_manager

To run the compiled program, use:

./expression_manager


Usage
Expression Manager
To convert an infix expression to postfix notation:

Create an instance of ExpressionManager.
Call the convertInfixToPostfix method with the infix expression as an argument.
Example:

ExpressionManager manager;
std::string postfix = manager.convertInfixToPostfix("(a+b)*c");


Queue
To use the Queue class:

Create an instance of Queue.
Use the enqueue, dequeue, front, isEmpty, and size methods to manage the queue.
Example:

Queue queue;
queue.enqueue(1);
queue.enqueue(2);
int front = queue.front(); // Should be 1

Contributions
Contributions are welcome. If you find any bugs or have suggestions, please open an issue on the GitHub repository.

License
This project is licensed under the MIT License - see the LICENSE.md file for details.

