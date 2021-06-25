#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int array[n-1];
	for (int i = 0; i < n-1; ++i)
		cin >> array[i];

	int i, j = 0;
	for (i = 1; i <= n; ++i){
		j = 0;
		while(j < n-1){
			if(array[j] == i) break;
			j++;
		}
		if(j == n-1) break;
	}
	cout << i;
	return 0;
}