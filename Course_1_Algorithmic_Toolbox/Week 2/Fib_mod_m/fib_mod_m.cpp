#include <iostream>
#include <vector>


int get_fibonacci_rem(int n, int m) {
	// write your code here
	std::vector<int> fib_array(n + 2);
	fib_array[0] = 0;
	fib_array[1] = 1;
	for (int i = 2; i <= n; i++) {
		fib_array[i] = (fib_array[i - 1] + fib_array[i - 2]) % m;
	}
	return fib_array[n];
}

long long period(long long m) {
	long a = 0; 
	long b = 1;
	long c = a + b;
	for (long long i = 0; i < m*m; i++)
	{
		c = (a + b) % m;
		a = b;
		b = c;
		if (a == 0 && b == 1) {
			//std::cout << "Period is: " << i + 1 << "\n";
			return i+1;
		}
	}
}

long long get_fibonacci_huge_fast(long long n, long long m) {
	long long rem = n % period(m);
	return get_fibonacci_rem(rem, m);
}


long long get_fibonacci_huge_naive(long long n, long long m) {
	if (n <= 1)
		return n;

	long long previous = 0;
	long long current = 1;

	for (long long i = 0; i < n - 1; ++i) {
		long long tmp_previous = previous;
		previous = current;
		current = tmp_previous + current;
	}

	return current % m;
}



int main() {
	long long n, m;
	std::cin >> n >> m;
	//std::cout << get_fibonacci_huge_naive(n, m) << '\n';
	std::cout << get_fibonacci_huge_fast(n, m) << '\n';
	//system("pause");
}
