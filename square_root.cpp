//Write a program to input an integer n,
//and to output square root of n with format %f.
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<fixed<<setprecision(6)<<sqrt(n)<<endl;
  return 0;
}