#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[],int n,int i){
	if(i==n){
		return 0;
	}
	return arr[i]+sumOfArray(arr,n,i+1);
}

int main(){
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<sumOfArray(arr,n,0);
	return 0;
}