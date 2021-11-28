#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	float b;
	double c;
	char d='D';

	cout<<&a<<endl<<&b<<endl<<&c<<endl;

	//gives value of d plus some garbage character until '\0' is received

	cout<<"gives value of d with garbage-> "<<&d<<endl;

	//now to print the address of char d we need to fool the compiler

	cout<<"gives address of d ->"<<(int*)&d<<endl;
	//also
	cout<<"gives address of d with void-> "<<(void*)&d;
	return 0;

}