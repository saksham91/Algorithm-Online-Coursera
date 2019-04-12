#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

bool descending_sort(int a, int b) {return (a > b);}

long long max_dot_product(vector<int> a, vector<int> b) {
	// write your code here
	long long result = 0;
	std::sort(a.begin(), a.end(), descending_sort);
	std::sort(b.begin(), b.end(), descending_sort);
	for (size_t i = 0; i < a.size(); i++) {
		//std::cout << a[i] << " " << b[i] << "\n";
		result += ((long long)a[i]) * b[i];
	}
	return result;
}

int main() {
	size_t n;
	std::cin >> n;
	vector<int> a(n), b(n);
	for (size_t i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	for (size_t i = 0; i < n; i++) {
		std::cin >> b[i];
	}
	std::cout << max_dot_product(a, b) << std::endl;
	//system("pause");
}
