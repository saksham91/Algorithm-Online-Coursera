#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

vector<int> partition3(vector<int> &a, int left, int right) {
	int pivot = a[left];
	int less_than = left;
	int greater_than = right;
	int i = left + 1;
	vector<int> two_partition;
	while(i <= greater_than) {
		if (a[i] < pivot) {
			swap(a[less_than], a[i]);
			less_than++;
			i++;
		}
		else if (a[i] > pivot) {
			swap(a[greater_than], a[i]);
			greater_than--;
		}
		else if (a[i] == pivot) {
			i++;
		}
	}
	two_partition.push_back(less_than);
	two_partition.push_back(greater_than);
	return two_partition;
}

int partition2(vector<int> &a, int l, int r) {
	int x = a[l];
	int j = l;
	for (int i = l + 1; i <= r; i++) {
		if (a[i] <= x) {
			j++;
			swap(a[i], a[j]);
		}
	}
	swap(a[l], a[j]);
	return j;
}

void randomized_quick_sort(vector<int> &a, int l, int r) {
	if (l >= r) {
		return;
	}
	int k = l + rand() % (r - l + 1);
	swap(a[l], a[k]);
	vector<int> m = partition3(a, l, r);
	randomized_quick_sort(a, l, m[0] - 1);
	randomized_quick_sort(a, m[1] + 1, r);
}

int main() {
	int n;
	std::cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); ++i) {
		std::cin >> a[i];
	}
	randomized_quick_sort(a, 0, a.size() - 1);
	for (size_t i = 0; i < a.size(); ++i) {
		std::cout << a[i] << ' ';
	}
	//system("pause");
}
