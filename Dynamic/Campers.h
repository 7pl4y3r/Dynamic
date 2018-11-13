#pragma once
#include <iostream>

using namespace std;

class Campers {

public:

	void exe() {

		read();
		findOut();
		write();
	}

private:

	int K, m, n, z[20], c = 0;

	void read() {

		cout << "k = "; cin >> K;
		cout << "m = "; cin >> m;
		cout << "n = "; cin >> n;

		for (int i = 1; i <= n; i++)
			cin >> z[i];
	}

	void findOut() {

		int k = K;
		for (int i = 1; i <= n && i <= 365; i++) {

			for(int ii = 1; ii < i; ii++)
			for(int j = 1; j <= i; j++)
				if (z[ii] < z[j]) {
					k++;
				}

			if (k != 0) {
				k--;
				c++;
			}

		}
	}

	void write() {
		cout << c << endl;
	}

};