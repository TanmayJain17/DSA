#include<bits/stdc++.h>
using namespace std;

void printInWords(int n,int r){
	if(n==0){
		return;
	}
	int m=n/10;
	r=n%10;
	printInWords(n/10,r);
	if(r==1){
		cout<<"One ";
	}
	else if(r==2){
		cout<<"Two ";
	}
	else if(r==3){
		cout<<"Three ";
	}
	else if(r==4){
		cout<<"Four ";
	}
	else if(r==5){
		cout<<"Five ";
	}
	else if(r==6){
		cout<<"Six ";
	}
	else if(r==7){
		cout<<"Seven ";
	}
	else if(r==8){
		cout<<"Eight ";
	}
	else if(r==9){
		cout<<"Nine ";
	}
	else{
		cout<<"Zero ";
	}
}

int main(){
	int n;
	cin>>n;
	printInWords(n,n%10);
	return 0;
}