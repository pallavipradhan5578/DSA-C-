#include<iostream>
using namespace std;
int main(){
    int i,n ;
    cout<<"Enter your num : ";
    cin>>n;
    if(n<2){
        cout<< n <<" is  Not a Prime number";
        return 0;
    }else{
        for(i=2;i<n;i++){
            if(n%i==0){
               cout<< n <<" is  Not a Prime number";
                return 0;   
            }
            
        
        }
        cout<< n <<" is a Prime number";
    }
}