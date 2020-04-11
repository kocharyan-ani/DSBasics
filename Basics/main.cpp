#include <iostream>

#include "LinkedStack.h"

int main() {
	// default ctor, push
	LinkedStack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

	std::cout << "s1 size is: " << s1.size() << std::endl;

	// copy ctor, assignment
	LinkedStack<int> s2(s1);
	s2.push(6);
	s2.push(7);
	std::cout << "before assignment s2 size is: " << s2.size() << ", s2 top is: " << s2.top() << std::endl;
	s2 = s1;
	std::cout << "after assignment s2 size is: " << s2.size() << ", s2 top is: " << s2.top() << std::endl;

	// is_empty, top, pop
	while (!s1.is_empty()) {
		std::cout << s1.top() << std::endl;
		s1.pop();
	}

	return 0;
}