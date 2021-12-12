#include<bits/stdc++.h>
using namespace std;

int calculatePower(int x,int n){
	if(n==0){
		return 1;
	}
	return x*calculatePower(x,n-1);
}

int main(){
	int x,n;
	cin>>x>>n;
	cout<<calculatePower(x,n);
	return 0;
}