//In cpp
#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);

    stack.pop();
	stack.pop();

	while (!stack.empty()) {
		cout << ' ' << stack.top();
		stack.pop();
	}
}

//In JAVA
// Java program to add the
// elements in the stack
/*import java.io.*;
import java.util.*;

class StackDemo {

	// Main Method
	public static void main(String[] args)
	{

		// Default initialization of Stack
		Stack stack1 = new Stack();

		// Initialization of Stack
		// using Generics
		Stack<String> stack2 = new Stack<String>();

		// pushing the elements
		stack1.push(4);
		stack1.push("All");
		stack1.push("Geeks");

		stack2.push("Geeks");
		stack2.push("For");
		stack2.push("Geeks");

		// Printing the Stack Elements
		System.out.println(stack1);
		System.out.println(stack2);
	}
}*/


