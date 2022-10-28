#include <iostream>
#include <string>
#include <sstream>

int main() {
	double a, b;
	char operation;
	double result = 0.0;

	std::cout << "Input calculation:" << std::endl;
	std::string buffer;
	std::cin >> buffer;
	std::stringstream buffer_stream(buffer);
	buffer_stream >> a >> operation >> b;

	if (operation == '+')
		result = a + b;
	else if (operation == '-')
		result = a - b;
	else if (operation == '*')
		result = a * b;
	else if (operation == '/')
		result = a / b;

	std::cout << "Result: " << result << std::endl;
}
