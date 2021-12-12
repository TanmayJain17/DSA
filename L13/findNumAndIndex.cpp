#include<bits/stdc++.h>
using namespace std;

void printIndex(int arr[],int n,int i,int k){
	if(i==n){
		return;
	}
	if(arr[i]==k){
		cout<<i<<" ";
	}
	printIndex(arr,n,i+1,k);
}

int main(){
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	printIndex(arr,n,0,key);
	return 0;
}