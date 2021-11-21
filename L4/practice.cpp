#include<bits/stdc++.h>
using namespace std;
int main(){
	int flag=0;
	do{
		char ch;
		cin>>ch;
		if(ch=='+'){
			int n1,n2;
			cin>>n1>>n2;
			cout<<n1+n2<<endl;
		}
		else if(ch=='-'){
			int n1,n2;
			cin>>n1>>n2;
			cout<<n1-n2<<endl;
		}
		else if(ch=='*'){
			int n1,n2;
			cin>>n1>>n2;
			cout<<n1*n2<<endl;
		}
		else if(ch=='/'){
			int n1,n2;
			cin>>n1>>n2;
			cout<<n1/n2<<endl;
		}
		else if(ch=='%'){
			int n1,n2;
			cin>>n1>>n2;
			cout<<n1%n2<<endl;
		}
		else if(ch=='x'||ch=='X'){
			return 0;
		}
		else{
			flag=1;
		}
	}while(flag==0);
	
	if(flag==1)
		cout<<"Invalid operation. Try again.";

	return 0;

}