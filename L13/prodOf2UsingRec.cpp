#include<bits/stdc++.h>
using namespace std;

int prodOf2(int a,int b){
	if(b==0||a==0){
		return 0;
	}
	if(b!=1){
		return (a+prodOf2(a,b-1));
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<prodOf2(a,b);
	return 0;
}