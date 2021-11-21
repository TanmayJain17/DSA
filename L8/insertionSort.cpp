#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		int currEle = arr[i];
		int j;
		
		for ( j = i - 1; j >= 0; j--) {
			if (currEle < arr[j]) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}


		arr[j + 1] = currEle;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}