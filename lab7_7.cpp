#include<iostream>
using namespace std;
//function
int rev(int n, int sum){
//condition
if (n>0){
sum=(n%10)+sum*10;
n=n/10;
rev(n,sum);
}
else
return sum;
}
//driver function
int main(){
int n,rever;
cout<<"enter a number :";
cin>>n;
//function calling
rever=reve(n,0);
if(n==reve)
	cout<<"ihe number which is pallindrome";
else
	cout<<"number which is not pallindrome";
return 0;
}

