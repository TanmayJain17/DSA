#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	int i=1;
	while(i<=n){
		if(i&1){
			for(int j=1;j<=i;j++){
				if(j&1)
					cout<<"1"<<" ";
				
				else
					cout<<"0"<<" ";
			}
		}
		else{
			for(int j=1;j<=i;j++){
				if(j&1)
					cout<<"0"<<" ";
				
				else
					cout<<"1"<<" ";
			}
		}

		cout<<endl;
		i++;
	}
	return 0;
}