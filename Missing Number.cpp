#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int array[n-1];
	for (int i = 0; i < n-1; ++i)
		cin >> array[i];
	vector<bool> exist (n, false);
	for (int i=0; i<n-1; ++i) exist[array[i]-1] = true;
	for (int i=0; i<n; ++i)
		if(exist[i] == false) cout << i+1;
	return 0;
}