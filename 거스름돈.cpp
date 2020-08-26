#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;
	
	if (n >= 500) {
		if (n % 500 == 0) {
			cout << n / 500 << endl;
		}
		else if (n % 100 == 0) {
			cout << n / 500 + (n % 500) / 100 << endl;
		}
		else if (n % 50 == 0) {
			cout << n / 500 + (n % 500) / 100 + ((n % 500) % 100) / 50 << endl;
		}
		else if (n % 10 == 0) {
			cout << n / 500 + (n % 500) / 100 + ((n % 500) % 100) / 50 + (((n % 500) % 100) % 50) / 10 << endl;
		}
	}

	if (n > 0 && n < 500) {
		if (n % 100 == 0) {
			cout << n / 500 + (n % 500) / 100 << endl;
		}
		else if (n % 50 == 0) {
			cout << n / 500 + (n % 500) / 100 + ((n % 500) % 100) / 50 << endl;
		}
		else if (n % 10 == 0) {
			cout << n / 500 + (n % 500) / 100 + ((n % 500) % 100) / 50 + (((n % 500) % 100) % 50) / 10 << endl;
		}
	}

	getchar();
	getchar();
	return 0;
}