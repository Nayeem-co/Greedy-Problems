#include <bits/stdc++.h>
using namespace std;


int findPlatform(double arr[], double dep[], int n)
{

	int plat_needed = 1, result = 1;
	int i = 1, j = 0;

	for (int i = 0; i < n; i++) {
		
		plat_needed = 1;

		for (int j = i + 1; j < n; j++) {
			// check for overlap
			if (max(arr[i], arr[j]) <= min(dep[i], dep[j]))
				plat_needed++;
		}

		// update result
		result = max(result, plat_needed);
	}

	return result;
}

// Driver Code
int main()
{
    double arr[] = {9.00, 9.40, 9.50, 11.00, 15.00, 18.00};
    double dep[] = {9.10, 12.00, 11.20, 11.30, 19.00, 20.00};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findPlatform(arr, dep, n);
	return 0;
}
