#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	int i=1;
	while(i<=n){

		for(int j=1;j<=(n-i);j++)
			cout<<" "<<" ";
		
		for(int j=1;j<=i;j++)
			cout<<i+(j-1)<<" ";
		
		for(int j=1;j<i;j++)
			cout<<(((i*2)-2)-(j-1))<<" ";

		cout<<endl;
		i++;
	}

	return 0;
}