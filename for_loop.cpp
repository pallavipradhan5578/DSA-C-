#include<iostream>
using namespace std;
int main(){
    int  n,i,power,num;;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>power;
    num=n;
    for( i=1;i<power;i=i+1)
    {
        num=num*n;

    }cout<<num;
}