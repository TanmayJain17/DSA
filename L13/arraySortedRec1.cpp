#include<bits/stdc++.h>
using namespace std;

bool checkIfSorted1(int arr[],int n){
	if(n==1){
		return true;
	}

	if(arr[0]<=arr[1]&&checkIfSorted1(arr+1,n-1)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	int arr[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<checkIfSorted1(arr,n);
	return 0;
}