#include <iostream>
using namespace std;

template <typename returntyp>
returntyp funct (returntyp x, returntyp y) {
	return (x + y);
}

template <typename T>
T Complex (T real1, T imag1, T real2, T imag2) {
	T x = real1 + real2;
	T y = imag1 + imag2;
	
	cout << endl <<"The addition of the given two complex numbers is" << endl;
	cout << x << " + " << y <<"i" << endl;
	
	return 0;
}

int main() {
	float solution;
	solution = funct<float>(1.054, 4.045);
	
	cout << "The solution is " << solution << endl;
	
	Complex<int>(8, 3, 5, 4);
	
	return 0;
}
