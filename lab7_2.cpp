/*Write a C++ program to print all natural numbers between 1 to n using recursion.*/
#include<iostream>
using namespace std;
//function declare
int foo(int n){
	if(n>1){
		cout << n <<",";
		n--;
		foo(n);
	}
	else
		return 1;
}
//driver function
int main(){
int n;
cout << "enter a number : ";
cin >> n;
cout << foo(n);
return 0;
}
