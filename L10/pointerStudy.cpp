#include<bits/stdc++.h>
using namespace std;
int main(){
//OUTPUT
// aptr 0x61feb4
// aptr+1 0x61feb8
// aptr+2 0x61febc

// dptr------>
// dptr 0x61fea8
// dptr+1 0x61feb0
// dptr+2 0x61feb8
	int a=10;
	int *aptr=&a;

	cout<<"aptr "<<aptr<<endl;
	cout<<"aptr+1 "<<aptr+1<<endl;
	cout<<"aptr+2 "<<aptr+2<<endl;

	double d=10.0;
	double *dptr=&d;
	cout<<endl<<"dptr------> "<<endl;
	cout<<"dptr "<<dptr<<endl;
	cout<<"dptr+1 "<<dptr+1<<endl;
	cout<<"dptr+2 "<<dptr+2<<endl;


	return 0;
}