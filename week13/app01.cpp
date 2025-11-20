#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
	cout << "Generic display : " << value << "\n";
}

template <>
void display<char>(char value) {
	cout << "Specialized display for char : " << value << "\n";
}

template <>
void display<const char*>(const char* value) {
	cout << "Specialized display for c style string : " << value << "\n";
}

int main()
{
	//generic
	display(3.23);
	display(50);
	//specialized
	display('2');
	display("2");
	display("HI");

	return 0;
}