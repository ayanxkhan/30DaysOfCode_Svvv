#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    cin >> str;
	int index = -1;
	char fnc = ' ';
	
	if(str.size()==0){
	cout<<"EMPTY STRING"<<endl;
	}

	for (auto i : str) {
		if (count(str.begin(), str.end(), i) == 1) {
			fnc = i;
			break;
		}
		else {
			index += 1;
		}
	}
	if (index == str.size()-1) {
		cout << "All characters are repeating" << endl;
	}
	else {
		cout << "First non-repeating character is " << fnc
			<< endl;
	}
	return 0;
}

