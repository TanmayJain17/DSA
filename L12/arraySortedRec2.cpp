#include<bits/stdc++.h>
using namespace std;

bool checkIfSorted1(int arr[],int n){
	if(n==1){
		return true;
	}

	if(arr[n-1]>=arr[n-2]&&checkIfSorted1(arr,n-1)){
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