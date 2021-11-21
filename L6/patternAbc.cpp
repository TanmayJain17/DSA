#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		char ch='A';
		for(int j=1;j<=(n-i)+1;j++){
			cout<<ch<<" ";
			ch++;
		}
		char c='A'+(n-i);
		for(int j=1;j<=(n-i)+1;j++){
			cout<<c<<" ";
			c--;
		}
		cout<<endl;
	}
	return 0;
}
