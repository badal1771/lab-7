/*Write a C++ program to find sum of all natural numbers between 1 to n using recursion.*/
#include<iostream>
using namespace std;
//function declare
int foo(int n,int sum){
	if(n>=1){
		sum=sum+n;
		n--;
		foo(n,sum);
	}
	else
		return sum;
}
int main(){
int n;
cout<<"enter a number : ";
cin>>n;
//CALLING FUNCTION
cout<<"sum of its is :"<<foo(n,0);
return 0;
}
