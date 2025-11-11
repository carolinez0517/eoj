#include<iostream>
#include<bitset>
using namespace std;
int main(){
    char c;
    cin>>c;
    cout<<bitset<8>((unsigned char)c)<<endl;
    return 0;
}