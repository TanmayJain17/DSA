#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n-1;i++){
		int flag=0;					//optimized
		for(int j=0;j<n-i-1;j++){

			if(arr[j]>arr[j+1]){
				flag=1;
				swap(arr[j],arr[j+1]);
			}
		}
		if(flag==0){
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}