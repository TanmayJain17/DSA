#include<bits/stdc++.h>
using namespace std;

void lookUpTable(int arr[],int n){
	
	arr[0]=0;
	for(int i=1;i<n;i++){
		arr[i]=(i&1)+arr[i/2];
	}
}

int main(){
	int arr[256];
	lookUpTable(arr,256);
	int n;
	cin>>n;
	int count=0;
	int t=0;
	while(n){
		t++;
		count+=arr[n&255];
		n>>=8;
	}
	cout<<t<<" "<<count;

}