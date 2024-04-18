//Jake Minneman
//CIS 1202 801
//April 18, 2024

#include <iostream>

using namespace std;

template <typename T>

T half(T);
int half(int);

int main(void) {
	double a = 3.0;
	float b = 4.0f;
	int c = 5;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}

//Templated function
template <typename T>
T half(T num) {
	return num / 2.0;
}

int half(int num) {
	return round(num / 2.0);
}