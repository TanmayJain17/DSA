#include <bits/stdc++.h>
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
void findSubString(char *str) {
    int n = strlength(str);
    int totalSubSets = pow(2, n);
    for (int counter = 0; counter <= totalSubSets; counter++) {
        for (int i = 0; i < n; i++) {
            if ((counter & (1 << i))) {
                cout << str[i];
            }
        }
        cout << endl;
    }
}

int main() {
    char str[100];
    cin >> str;
    findSubString(str);
    return 0;
}