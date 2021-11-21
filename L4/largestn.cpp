#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int max=INT_MIN;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a>max){
			max=a;
		}
	}
	cout<<"largest is"<<max;
	return 0;
}
