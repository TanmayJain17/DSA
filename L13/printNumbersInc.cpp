#include<bits/stdc++.h>
using namespace std;

int  printNumbersInc(int n,int i){ 
	if(i==n){
		return n;
	}
	cout<<i<<endl;
	printNumbersInc(n,i+1);
}

int main(){
	int n;
	cin>>n;
	/*int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}*/
	cout<<printNumbersInc(n,1);
	return 0;
}