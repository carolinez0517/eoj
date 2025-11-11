#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double r;
    cin>>r;
    double e=M_PI*r*r;
    double m=2*r*r;
    cout<<fixed<<setprecision(6)<<e<<endl;
    cout<<fixed<<setprecision(6)<<m<<endl;
}