#pragma once
#include <iostream>

using namespace std;

class Gasoline {

public:

	void exe() {

		read();
		init();
		findOut();
		write(a, m);
		write(v, m);

	}

private:

	int n, m, v[10], a[10];

	void init() {

		for (int i = 0; i < 10; i++)
			a[i] = 0;

	}

	void read() {

		cout << "n = ";  cin >> n;
		cout << "m = ";  cin >> m;

		for (int i = 1; i <= m; i++)
			cin >> v[i];
	}

	void findOut() {

		int x = n, c = 0;
		for (int i = 1; i <= m; i++) {

			if (x - v[i] < 0) {
				cout << "Nu are Dacia benzina\n";
				c++;
				x = n;
				a[i] = 1;
			}
			else
				x -= v[i];
		}
	}

	void write(int arr[], int len){
		
		for (int i = 1; i <= len; i++)
			cout << arr[i] << ' ';

		cout << endl;
	}
};