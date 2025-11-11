#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
  int b;
  double x,result;
  cin>>b;
  cin>>x;
  result=log(x)/log(b);
  cout<<fixed<<setprecision(6)<<result<<endl;
  return 0;
}