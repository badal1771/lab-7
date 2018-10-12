/*10. Write a C++ program to generate nth Fibonacci term using recursion.*/
#include<iostream>
using namespace std;
int fib(int a){
	//giving conditions so that we avoid 1 and 0
	if((a==1)||(a==0)){
        return(a);
	}
	else{
        return(fib(a-1)+fib(a-2));
        }
        }
    int main(){
	int a,i=0;
	//asking user for no. of terms
	cout<<"Give no. of terms in the Fibonacci Series:"<<endl;
	cin>>a;
	cout<<"Fibonacci Series for "<<a<<" is "<<endl;
	//to continue with the functions
	while(i<a){
        	cout<<" "<<fib(i)<<endl;
        	i++;
	}
	return 0;
}
