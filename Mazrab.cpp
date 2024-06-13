#include<iostream>
using namespace std;

{
	int n;
	cin >> n;
	for (int i = 1;(i*n < 100);i++) {
		cout << i*n;
	}
	return 0;
}