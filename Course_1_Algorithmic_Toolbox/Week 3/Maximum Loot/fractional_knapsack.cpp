#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

int max_index(vector<int> weights, vector<int> values) {
	int max_index = 0;
	int size = weights.size();
	double max = 0.0;
	for (int i = 0; i < size; i++) {
		if (weights[i] != 0 && ((double)values[i] / weights[i]) > max) {
			max = (double)values[i] / weights[i];
			max_index = i;
		}
	}
	return max_index;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
	double value = 0.0;
	int index, amount;
	int size = weights.size();
	for (int i = 0; i < size; i++) {
		if (capacity == 0)
			return value;
		//gets the index of the element with highest (value/weight) ratio
		index = max_index(weights, values);
		//amount to be added in the knapsack is the minimum of the total weight of the knapsack and total weight of that item
		//e.g. - Sack weight = 10 kg, Diamond weight = 20kg. Can only pick min(10, 20) to transfer into the knapsack
		amount = std::min(capacity, weights[index]);
		//value in the knapsack is the amount of weight of the item selected times its value per kg.
		value += amount * (double)values[index] / weights[index];
		//subtract the weight of the diamond transferred into the knapsack from total diamonds
		weights[index] -= amount;
		//Subtract the capacity of the knapsack
		capacity -= amount;
	}
	return value;
}

int main() {
	int n;
	int capacity;
	std::cin >> n >> capacity;
	vector<int> values(n);
	vector<int> weights(n);
	for (int i = 0; i < n; i++) {
		std::cin >> values[i] >> weights[i];
	}

	double optimal_value = get_optimal_value(capacity, weights, values);

	std::cout.precision(10);
	std::cout << optimal_value << std::endl;
	system("pause");
	return 0;
}
