#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
	char eordoption
	cout << "Do you want to encrypt or decrypt? (e/d)" << endl;
	cin >> eordoption
	if (eordoption != 'e'||eordoption != 'd') {
		cout << "not valid" << endl;
		return 0;
	}
	else if (eordoption == 'e') {
		encrypt();
	}
	else {
		decrypt();
	}
	return 0;
}
