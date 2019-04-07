#include <iostream>
#include <vector>

int fibonacci_rem(int n) {
	std::vector<int> fib_array(n + 2);
	int vertical = 0; 
	int horizontal = 0;
	fib_array[0] = 0;
	fib_array[1] = 1;
	if (n <= 1) {
		return fib_array[n];
	}
	else {
		for (int i = 2; i <= n; i++) {
			fib_array[i] = ((fib_array[i - 1] % 10) + (fib_array[i - 2] % 10)) % 10;
			//sum = (sum + fib_array[i]) % 10;
			vertical = fib_array[i];
			horizontal = fib_array[i] + fib_array[i - 1];
		}
		return (vertical*horizontal % 10);
	}
}


int fibonacci_sum_square(long long n) {
	long a = 0;
	long b = 1;
	long c = a + b;
	for (long long i = 0; i < 100; i++)
	{
		c = (a + b) % 10;
		a = b;
		b = c;
		if (a == 0 && b == 1) {
			//std::cout << "Period is: " << i + 1 << "\n";
			long long rem = n % (i + 1);
			return fibonacci_rem(rem);
		}
	}
}

int main() {
	long long n = 0;
	std::cin >> n;
	std::cout << fibonacci_sum_square(n) << "\n";
	//system("pause");
}
