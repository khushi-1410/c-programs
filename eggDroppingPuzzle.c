//Implementation of egg dropping puzzle 

#include <limits.h>
#include <stdio.h>

int max(int a, int b)
{
	return (a > b) ? a : b;
}


int eggDrop(int n, int k)
{
	if (k == 1 || k == 0)
		return k;

	if (n == 1)
		return k;

	int min = INT_MAX, x, res;

	for (x = 1; x <= k; x++) {
		res = max(eggDrop(n - 1, x - 1),eggDrop(n, k - x));
		if (res < min)
			min = res;
	}

	return min + 1;
}

int main()
{
	int n = 5, k = 15;
	printf("\nMinimum trials in worst case with %d eggs and %d floors is : %d \n", n, k, eggDrop(n, k));
	return 0;
}
