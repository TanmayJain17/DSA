#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	while(n){
		if(n&1){
			sum++;
		}
		n>>=1;
	}
	cout<<sum;
	return 0;
}