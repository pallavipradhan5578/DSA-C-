#include<iostream>
using namespace std;
int main(){
    int n,i,last,pre,curr;
    last=0;pre=1;
     cout<<"Enter  youe num :";
     cin>>n;
    cout<< last<<" "<< pre<<" ";
    

    
    for ( i = 2; i < n; i++)
    {
        curr=last+pre;
        cout<<curr<<" ";
        last=pre;
        pre=curr;
       
    }return 0;
    
}