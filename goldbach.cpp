#include<iostream>
#include<cmath>
using namespace std;
bool primecheck(int n){
        if(n<2){
            return false;
        }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }   
    return true;
   
}
int main(){
    int n;
    while(cin>>n){
        int a=0;
        int b=0;
        int maxproduct=0;
        for(int i=2;i<=n/2;i++){
        int j=n-i;
        if(primecheck(i)&&primecheck(j)){
            if((i*j)>maxproduct){
                a=i;
                b=j;
                maxproduct=a*b;
            }
        }
    }
    cout<<maxproduct<<endl;
    }
    
    return 0;
}