#include <bits/stdc++.h>
using namespace std;
intsubvySum(intarr[], intn, intsum)
{
	intcurr_sum, i, j;

	// Pick a starting point
	for (i = 0; i < n; i++) {
		curr_sum = arr[i];

		// try all subvys starting with 'i'
		for (j = i + 1; j <= n; j++) {
			if (curr_sum == sum) {
				cout << "Sum found between indexes "
					<< i << " and " << j - 1<<endl;
                    cout<<"Element between "<<arr[i]<<" "<<arr[j-1]<<endl;
				return 1;
			}
			if (curr_sum > sum || j == n)
				break;
			curr_sum = curr_sum + arr[j];
		}
	}

	cout << "No subvy found";
	return 0;
}
intmain()
{
	intarr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	intn = sizeof(arr) / sizeof(arr[0]);
	intsum = 23;
	subvySum(arr, n, sum);
	return 0;
}