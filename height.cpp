#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    char gender;
    double length;
    double height;
    cin>>gender>>length;
    if (gender=='F')
        height=length*1.94+28.7;
    else
        height=length*1.88+32;
    cout<<fixed<<setprecision(1)<<height<<endl;
}