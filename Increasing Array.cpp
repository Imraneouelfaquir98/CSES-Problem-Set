#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n, step = 0;
	cin >> n;
	int array[n];
	for(int i=0; i<n ; i++)
		cin >> array[i];

	for(int i=0; i<n-1 ; i++)
		if(array[i] > array[i+1]){
			step += array[i] - array[i+1];
			array[i+1] = array[i];
		}
	cout<<step<<endl;
	return 0;
}