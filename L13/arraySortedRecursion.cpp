#include<bits/stdc++.h>
using namespace std;

bool checkIfSorted(int arr[],int n,int i){
	if(i==(n-1)){
		return true;
	}
	if(arr[i]>=arr[i+1]){
		return false;
	}
	checkIfSorted(arr,n,i+1);
}

int main(){
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<checkIfSorted(arr,n,0);
	return 0;
}