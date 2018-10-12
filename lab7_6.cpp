#include<iostream>
using namespace std;
int rev(int n, int sum){
if (n>0)
{
    sum=(n%10)+sum*10;
    n=n/10;
    rev(n,sum);
}
else
return sum;
}
int main(){
int n;
cout<<"enter a number : ";
cin>>n;
//function calling
cout<<"reverse is :"<<rev(n,0);
return 0;
}

