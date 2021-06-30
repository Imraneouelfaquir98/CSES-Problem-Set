#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int T, count = 0;
	cin >> T;

	int i = 0, j = 0, move = 0;

	for(int n = 1; n <= T; n++){
		move = 0;
		for(i = 0; i < n-1 and n>2; i++)
			for(j = (n-3)*(i<n-3); j < n-1; j++){
				move = 0;
				if(i+2 <  n) move += (j+1 < n)*(i+2 == n-1 or j+1 == n-1) + (j-1 >= 0)*(i+2 == n-1 or j-1 == n-1);
				if(i-2 >= 0) move += (j+1 < n)*(i-2 == n-1 or j+1 == n-1) + (j-1 >= 0)*(i-2 == n-1 or j-1 == n-1);
				if(j+2 <  n) move += (i+1 < n)*(j+2 == n-1 or i+1 == n-1) + (i-1 >= 0)*(j+2 == n-1 or i-1 == n-1);
				if(j-2 >= 0) move += (i+1 < n)*(j-2 == n-1 or i+1 == n-1) + (i-1 >= 0)*(j-2 == n-1 or i-1 == n-1);
				count -= move;
			}
		i = 0; j = 0;
		for(i = 0; i < n; i++)
			for(j = (n-1)*(i != n-1); j < n; j++){
				move = 0;
				if(i+2 <  n) move += (j+1 < n) + (j-1 >= 0);
				if(i-2 >= 0) move += (j+1 < n) + (j-1 >= 0);
				if(j+2 <  n) move += (i+1 < n) + (i-1 >= 0);
				if(j-2 >= 0) move += (i+1 < n) + (i-1 >= 0);
				count -= move + 1;
			}
		count += (2*n-1)*(pow(n-1, 2)*(n>1) + pow(n, 2));
		cout<<count/2<<endl;
	}
	return 0;
}