#include <iostream>

int get_change(int m) {
	//write your code here
	int number_of_coins = 0;
	int tens, fives, ones = 0;
	if (m > 0) {
		tens = m / 10;
		m = m % 10;
		fives = m / 5;
		m = m % 5;
		ones = m;
		/*std::cout << "Number of 10 coins: " << tens << "\n";
		std::cout << "Number of 5 coins: " << fives << "\n";
		std::cout << "Number of 1 coins: " << ones << "\n";*/
		number_of_coins = tens + fives + ones;
	}
	return number_of_coins;
}

int main() {
	int m;
	std::cin >> m;
	std::cout << get_change(m) << '\n';
	//system("pause");
}
