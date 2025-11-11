#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double h;
    if(n==1){
        h=0;
    }
    else if (n==2){
        h=5;
    }
    else{
        h=10+3*(n-3);
    }
    double total_h=h+1.75;
    double time=sqrt(total_h/4.9);
    cout<<fixed<<setprecision(3)<<time<<endl;
    return 0;
}