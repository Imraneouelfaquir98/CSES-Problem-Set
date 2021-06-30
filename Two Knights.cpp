#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int T, count = 0;
	cin >> T;
	for(int n = 1; n <= T; n++){
		count -= (16*n-32)*(n>=5) + 8*n*(n==4) + 15*(n==3) + 2*n-1;
		count += (2*n-1)*(pow(n-1, 2)*(n>1) + pow(n, 2));
		cout<<count/2<<endl;
	}
	return 0;
}