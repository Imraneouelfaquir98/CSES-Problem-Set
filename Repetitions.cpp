#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int max_length = 1, current_length = 0, k;
	cin >> s;
	for(int i=0; i<s.length()-1; i++){
		if(s[i] == s[i+1]){
			current_length = i;
			while(s[i] == s[i+1] && i<s.length()-1) i++;
			current_length = i-current_length + 1;
		}
		if(current_length > max_length) max_length = current_length;
	}
	cout<<max_length<<endl;
	return 0;
}