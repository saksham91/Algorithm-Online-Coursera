#include <iostream>
#include <vector>

int get_fibonacci_rem(int n) {
	std::vector<int> fib_array(n + 2);
	int sum = 0;
	fib_array[0] = 0;
	fib_array[1] = 1;
	if (n <= 1) {
		return fib_array[n];
	}
	else {
		sum = 1;
		for (int i = 2; i <= n; i++) {
			fib_array[i] = ((fib_array[i - 1] % 10) + (fib_array[i - 2] % 10)) % 10;
			sum = (sum + fib_array[i]) % 10;
		}
		return sum;
	}
}


int fibonacci_sum_fast(long long n) {
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
			return get_fibonacci_rem(rem);
		}
	}
}

int fibonacci_sum_naive(long long n) {
	if (n <= 1)
		return n;

	long long previous = 0;
	long long current = 1;
	long long sum = 1;

	for (long long i = 0; i < n - 1; ++i) {
		long long tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
		sum += current;
	}

	return sum % 10;
}

int main() {
	long long n = 0;
	std::cin >> n;
	std::cout << fibonacci_sum_fast(n) << "\n" ;
	system("pause");
}
