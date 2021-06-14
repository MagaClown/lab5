#include <iostream>
using namespace std;

int foo(int i, float& val) {
	cout << "a[" << i << "]: ";
	cin >> val;
}

int main(){
	float a[255];
	int n;
	
	cout << "n: ";
	cin >> n;
	
	if (n % 2) {
		int i(0);
		for (; i < n / 2; ++i)
			foo(i, a[i]);
		while (i < n) {
			foo(i, a[i]);
			++i;
		}
	}
	else {
		int i = 0;
		do {
			foo(i, a[i]);
		} while(++i < n);
	}
	
	int j = 0;
	float p(1);
L:
	p *= a[j];
	j += 2;
	if (j < n)
		goto L;
	
	cout << "result: " << p;
	cin.get(), cin.get();
	
}
