#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a, b, c;
    cin>>a>>b>>c;
    double delta = b*b-4*a*c;
    if (delta>0){ 
        double x1=(-b-sqrt(delta))/(2*a);
        double x2=(-b+sqrt(delta))/(2*a);
        if (x1>x2) swap(x1, x2);
        cout<<fixed<<setprecision(6)<<x1<<" "<<x2<<endl;
    } 
    else if (fabs(delta)<1e-12){ 
        double x=-b/(2*a);
        cout<<fixed<<setprecision(6)<<x<<endl;
    } 
    else { 
        cout<<"No Answer"<<endl;
    }

    return 0;
}