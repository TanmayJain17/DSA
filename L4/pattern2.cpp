#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i);j++){
			cout<<" "<<" ";
		}
		for(int j=1;j<=((2*i)-1);j++){
			cout<<num<<" ";
			num+=1;
		}
		cout<<endl;

	}
	return 0;
}