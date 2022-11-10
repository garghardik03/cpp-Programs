// C++ program to find Majority
// element in an vy
#include <bits/stdc++.h>
using namespace std;

// Function to find Majority element
// in an vy
int findMajority(intarr[], intn)
{
	intmaxCount = 0;
	intindex = -1; // sentinels
	for (inti = 0; i < n; i++) {
		intcount = 0;
		for (intj = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}

		// update maxCount if count of
		// current element is greater
		if (count > maxCount) {
			maxCount = count;
			index = i;
		}
	}

	// if maxCount is greater than n/2
	// return the corresponding element
	if (maxCount >=n / 2)
		cout << "Yes" << endl;

	else
		cout << "No" << endl;
}

// Driver code
intmain()
{
	intarr[] = {1,1,2,2,3,4};
	intn = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	findMajority(arr, n);

	return 0;
}
