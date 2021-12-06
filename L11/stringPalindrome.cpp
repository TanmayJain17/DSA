#include<bits/stdc++.h>
using namespace std;
int strlength(char *arr) {
	int i = 0;
	int count = 0;
	while (arr[i] != '\0') {
		i++;
		count++;
	}
	return count;
}
int main() {
	char str[100];
	cin >> str;
	int n = strlength(str);
	int start = 0;
	int end = n - 1;
	int flag = 0;

	while (start <= end) { 								//while(start<end) this will also work

		if (str[start] != str[end]) {
			flag = 1;
			break;
		}
		start++;
		end--;
	}
	if (flag == 0) {
		cout << "Palindrome";
	}
	else {
		cout << "Not a Palindrome";
	}
	return 0;
}