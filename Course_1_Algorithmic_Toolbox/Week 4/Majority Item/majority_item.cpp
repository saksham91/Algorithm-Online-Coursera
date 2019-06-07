#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
	if (left == right) return -1;	//no element in the vector
	if (left + 1 == right) return a[left];	//only one element in the vector
	int max = 0;
	int majority_requirement = floor((double)a.size() / 2);
	map<int, int> freq_map;
	for (int i = 0; i < a.size(); i++) {
		freq_map[a[i]]++;
	}
	for (map<int, int>::iterator it = freq_map.begin(); it != freq_map.end(); ++it) {
		//std::cout << it->first << " => " << it->second << '\n';
		if (it->second > max) {
			max = it->second;
			//cout << "Max is: " << max << "\n";
		}
	}
	//cout << "Majority Requirement: " << majority_requirement+1 << "\n";
	if (max > majority_requirement) return 1;
	else return 0;
}

int main() {
	int n;
	std::cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < a.size(); ++i) {
		std::cin >> a[i];
	}
	int res = get_majority_element(a, 0, a.size());
	std::cout << res << '\n';
	//system("pause");
}
