/*Write a C++ program to print all even or odd numbers in given range using recursion.*/
#include<iostream>
using namespace std;
//function declare
int foo(int n){
	if(n>1){
		if(n%2==0){
			cout<<n<< ",";
		}
		n--;
		foo(n);
	}
	else
		return 0;
}
//driver function
int main(){
int n;
cout<<"enter a number : ";
cin>>n;
cout<<foo(n);
return 0;
}

