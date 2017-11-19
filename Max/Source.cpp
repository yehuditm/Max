#include <iostream>

using namespace std;

template <typename T>
T max(T x, T y, T z)
{
	return x>y ? x : y>z? y : z;
}

int main()
{
	cout << max<int>(17, 17,10) << "\n";
	cout << max<double>(17.01, 17.0055,17) << "\n";
	return 0;
}