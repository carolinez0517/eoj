#include<iostream>    //交换整数x的第i位和第j位
using namespace std;
int main(){
    int x,i,j;
    cin>>x>>i>>j;
    unsigned int ux=x;
    unsigned int bit_i=(ux>>i)&1;  //提取任意位置的位值
    unsigned int bit_j=(ux>>j)&1;   //&1 按位与，提取数字
    if(bit_i!=bit_j){
        ux=ux^(1<<i);    //运用异或实现位翻转 0^1=1 1^1=0
        ux=ux^(1<<j);
    }
    cout<<(int)ux<<endl;
    return 0;
}
    