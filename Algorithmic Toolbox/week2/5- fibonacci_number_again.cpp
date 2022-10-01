#include <iostream>
//using namespace std;

long pisano(long m)
{
	long prev = 0;
	long curr = 1;
	long res = 0;

	for(int i = 0; i < m * m; i++)
	{
		long temp = 0;
		temp = curr;
		curr = (prev + curr) % m;
		prev = temp;

		if (prev == 0 && curr == 1)
			res = i + 1;
	}
	return res;
}


long fibonacciModulo(long n, long m)
{
	
	long pisanoPeriod = pisano(m);
	n = n % pisanoPeriod;
	long prev = 0;
	long curr = 1;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	for(int i = 0; i < n - 1; i++)
	{
		long temp = 0;
		temp = curr;
		curr = (prev + curr) % m;
		prev = temp;
	}
	return curr % m;
}

int main()
{
	long long n, m;
    std::cin >> n >> m;
	std::cout << (fibonacciModulo(n, m));
	return 0;
}

