#include<bits/stdc++.h>
using namespace std;

int  printNumbersInc(int n){
	if(n==1){
		return 1;
	}
	cout<<n<<endl;
	printNumbersInc(n-1);
}

int main(){
	int n;
	cin>>n;
	/*int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}*/
	cout<<printNumbersInc(n);
	return 0;
}