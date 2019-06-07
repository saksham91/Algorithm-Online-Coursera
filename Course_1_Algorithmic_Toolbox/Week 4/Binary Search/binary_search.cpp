#include <iostream>
#include <cassert>
#include <vector>
#include <math.h>

using namespace std;

int binary_search(const vector<int> &a, int left, int right, int x) {
	if (right < left)
		return -1;
	int mid = floor((left + right) / 2);
	if (a[mid] == x)
		return mid;
	else if (a[mid] < x) {
		return binary_search(a, mid + 1, right, x);
	}
	else if (a[mid] > x) {
		return binary_search(a, left, mid - 1, x);
	}
}

int linear_search(const vector<int> &a, int x) {
	for (size_t i = 0; i < a.size(); ++i) {
		if (a[i] == x) return i;
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); i++) {
		cin >> a[i];
	}
	int m;
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	for (int i = 0; i < m; ++i) {
		//cout << linear_search(a, b[i]) << ' ';
		cout << binary_search(a, 0, n-1, b[i]) << ' ';
	}
	//system("pause");
}
