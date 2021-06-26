#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	if(n == 2 or n == 3) cout<<"NO SOLUTION"<<endl;
	else
		for(int t = 0; t<2; t++){
			int i = (t == 0)?2:1;
			while(i <= n){
				cout<<i<<" ";
				i += 2;
			}
		}

	return 0;
}