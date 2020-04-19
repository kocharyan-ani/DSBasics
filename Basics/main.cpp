#include <iostream>

#include "SparsePolinomial.h"

int main() {
	/* Linked Stack test
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
	}*/

	/*  Stack test
	// default ctor, push
	Stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

	std::cout << "s1 size is: " << s1.size() << std::endl;

	// copy ctor, assignment
	Stack<int> s2(s1);
	s2.push(6);
	s2.push(7);
	std::cout << "before assignment s2 size is: " << s2.size() << ", s2 top is: " << s2.top() << std::endl;
	s2 = s1;
	std::cout << "after assignment s2 size is: " << s2.size() << ", s2 top is: " << s2.top() << std::endl;

	// is_empty, top, pop
	while (!s1.is_empty()) {
		std::cout << s1.top() << std::endl;
		s1.pop();
	}*/

	/*typedef std::vector<std::pair<double, int>> Information;

	Information info1 = { std::make_pair(2, 5),
						  std::make_pair(3, 3),
						  std::make_pair(4, 0) };
	Information info2 = { std::make_pair(2, 7),
						  std::make_pair(3, 5),
						  std::make_pair(4, 3)};
	Information info3 = { std::make_pair(-2, 7),
						  std::make_pair(3, 5),
						  std::make_pair(4, 3) };

	SparsePolinomial s1(info1), s2(info2), s5(info3);
	std::cout << "s1 is: " << s1 << "s2 is: " << s2;
	std::cout << (s2 += s5);

	SparsePolinomial s3;
	s3 = s1;
	std::cout << "s3 is: " << s3;

	SparsePolinomial s4(s2);
	std::cout << "s4 is: " << s4;

	std::cout << "s1 in value 2: " << s1.calculate_value(2) << std::endl;

	std::cout << "s1 after multiply with 0: " << (s1 *= 0) << std::endl;
	std::cout << "s3 after multiply with 3: " << (s3 *= 10);

	std::cout << "s2 after derivative: " << s2.derivative();
	std::cout << "s3 after derivative: " << s3.derivative();

	std::cout << "s3 += s4 is: " << (s3 += s4);*/

	return 0;
}