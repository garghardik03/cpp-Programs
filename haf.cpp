#include <iostream>
#include <string>
#include <fstream>
using namespace std;
intmain()
{
	ifstream file("xyz.txt", ios::in);
	string curr;
	intcount = 0;
	while (getline(file, curr))
	{
		for (inti = 0; i < curr.size(); i++)
			if (curr[i] == '.' || curr[i] == '?' || curr[i] == '!')
				count++;
	}
	cout << "The total number of sentences are: " << count << "\n";
	return 0;
}