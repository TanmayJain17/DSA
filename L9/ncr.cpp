#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
	
	if (n == 0) {
		return 1;
	}

	return n * fact(n - 1);
}

int main() {
	int n,r;
	if(n>=r)
		cout<<(fact(n)/(fact(r)*fact(n-r)));
	else
		cout<<"Invalid Input";
	return 0;

}