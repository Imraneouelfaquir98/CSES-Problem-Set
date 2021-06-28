#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int T, count = 0;
	cin >> T;

	for(int n = 1; n <= T; n++){
		count = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++){
				int move = 0;
				if(i+2 <  n) move += (j+1 <  n) + (j-1 >= 0);
				if(i-2 >= 0) move += (j+1 <  n) + (j-1 >= 0);
				if(j+2 <  n) move += (i+1 <  n) + (i-1 >= 0);
				if(j-2 >= 0) move += (i+1 <  n) + (i-1 >= 0);
				count += n*n - move - 1;
			}
		cout<<count/2<<endl;
	}
	return 0;
}