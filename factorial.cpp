#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double e=1,term=1;
    int i=1;
    while(term>=1e-6){
        term=term/i;
        e=e+term;
        i=i+1;
    }
    cout<<fixed<<setprecision(6)<<e<<endl;
    return 0;
}