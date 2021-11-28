#include<bits/stdc++.h>
using namespace std;
int main() {
//OUTPUT
// value of the pointer aptr 0x61fe9c
// value of a using pointer and de-reference operator-> 10value newaptr 0x61fe94
// value stored in variable newaptr is pointing to-> 0x61fe9c
// Pi
// PPi
// i
// not working
// type of a->  i
// type of d->  d
// type of f->  f
// type of float pointer->  Pf
	int a = 10;
	double d=10.00;
	float f=5.5;
	float* fptr=&f;

	//pointer declaration
	//datatype * ptrname; //datatype of the variable whose address you want to store
	int *aptr = &a; //creating a pointer aptr which is storing the address of int type variable a;
	cout << "value of the pointer aptr " << aptr << endl;

	//getting the value of the variable from the pointer we use de-reference operator;
	cout << "value of a using pointer and de-reference operator-> " << *aptr;


	//creating a pointer for a pointer

	int * *newaptr = &aptr;
	cout<<"value newaptr "<<newaptr<<endl<<"value stored in variable newaptr is pointing to-> "<<*newaptr;

	cout<<endl<<typeid(aptr).name()<<endl<<typeid(newaptr).name()<<endl<<typeid(*aptr).name();
	cout<<endl<<"not working "<<endl;
	cout<<"type of a->  "<<typeid(a).name()<<endl;
	cout<<"type of d->  "<<typeid(d).name()<<endl;
	cout<<"type of f->  "<<typeid(f).name()<<endl;
	cout<<"type of float pointer->  "<<typeid(fptr).name()<<endl;
	return 0;
}