#include<iostream>
using namespace std;
int main(){
    int  num,i;
    cout<<"Enter the table : ";
    cin>>num;
    for( i=1;i<=10;i=i+1)
    {
        cout<<num <<"*"<< i << " = "<<num*i<<endl ;
    }
}