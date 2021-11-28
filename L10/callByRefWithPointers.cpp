#include<bits/stdc++.h>
using namespace std;

// OUTPUT
// enter c->10

// updated c-> 12

int updateByTwo(int *aptr){
	*aptr=*aptr+2;
	return *aptr;
}

int main(){
	int c;
	cout<<"enter c->";
	cin>>c;
	int *cptr=&c;
	cout<<endl<<"updated c-> "<<updateByTwo(cptr);
	return 0;
}