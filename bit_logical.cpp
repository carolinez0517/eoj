#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a&&b)<<endl; //逻辑与：只有两个数都是1才是1
    cout<<(a&b)<<endl; //位与:对每一位都算，只有两个数都是1才是1
    if(b>=0&&b<=31){
        cout<<(a>>b)<<endl;  //有符号右移（负数时高位补1）
        cout<<((unsigned int)a>>b)<<endl; //无符号右移（高位总是补0）
    }

}