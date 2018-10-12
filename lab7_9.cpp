/*9. Write a C++ program to find factorial of any number using recursion.*/
#include<iostream>
using namespace std;
int fact(int x){
	//conditions
	if(x != 1)
        return x * fact(x - 1);
	else
        return 1;
        }
        int main(){
        int x;
	//Enter a positive integer
        cout << "Enter a positive integer: ";
        cin >> x;
        cout<< x<< "! = " << fact(x)<<endl;
        return 0;
}

