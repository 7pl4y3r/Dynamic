#pragma once
#include <iostream>

using namespace std;

class ToWrite {

public:

	void exe() {

		read();
		init();
		dynamic();
		write(1, 1);
	}

private:

	int n, S[10][10], a[10][10], p[10][10];

	void read() {

		cin >> n;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				cin >> a[i][j];
	}

	void init() {

		for (int i = 1; i <= n; i++)
			S[n][i] = a[n][i];

	}

	void dynamic() {

		for (int i = n - 1; i >= 1; i--) 
		for(int j = 1; j <= i; j++)
			if (S[i + 1][j] > S[i + 1][j + 1]) {
				S[i][j] = a[i][j] + S[i+1][j];
				p[i][j] = 1;
			}
			else {
				S[i][j] = a[i][j] + S[i + 1][j + 1];
				p[i][j] = 2;
			}
	}

	void write(int i, int j) {

		if (i <= n) {
			cout << a[i][j] << '+';
			if (p[i][j] == 1)
				write(i + 1, j);
			else
				write(i + 1, j + 1);
		}
	}
};