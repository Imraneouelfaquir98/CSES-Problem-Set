#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t;
	cin >> t;

	long long int a[t][2];

	for(int i=0; i<t; i++){
		cin >> a[i][0];
		cin >> a[i][1];
	}

	for(int i=0; i<t; i++){
		if(a[i][0] > a[i][1]){
			if(a[i][0]%2 == 0)
				cout<< 1 + a[i][0]*a[i][0] - a[i][1]<<endl;
			else
				cout<< 2 - a[i][0] + (a[i][0] + 1)*(a[i][0] - 1) - (a[i][0] - a[i][1])<<endl;
		}else{
			if(a[i][1]%2 == 0)
				cout<< 1 + a[i][0] +  a[i][1]     *(a[i][1] - 2)<<endl;
			else
				cout<< 2 - a[i][0] + (a[i][1] + 1)*(a[i][1] - 1)<<endl;
		}
	}



	return 0;
}