/*Write a C++ program to find sum of all even or odd numbers in given range using recursion.*/
#include<iostream>
using namespace std;
int foo(int n,int sum){
	if(n>=1){
		if(n%2==1)
		sum=sum+n;
		n--;
		foo(n,sum);
	}
	else
		return sum;
}
int main(){
int n;
cout<<" enter a number : ";
cin>>n;
//CALLING FUNCTION
cout<<"sum of it is :"<<foo(n,0);
return 0;
}
