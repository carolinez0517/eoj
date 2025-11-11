#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>0&&b>0){
        if(a>b){
        cout<<b+(a-b)/2.0<<endl;
        }
    else{
        cout<<a+(b-a)/2.0<<endl;}
    }
    else if(a<0&&b<0){
        if(a<b){
            cout<<b+(a-b)/2.0<<endl;
        }
        else{
            cout<<a+(b-a)/2.0<<endl;
        }
    }
    else{
        cout<<(b+a)/2.0<<endl;
    }
    return 0;
}