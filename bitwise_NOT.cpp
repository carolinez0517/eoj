#include<iostream>
#include<bitset> 
//输入一个整数x输出对x 执行下列操作后的结果值：
//将x中从第p位开始右边的n个（二进制）位求反（即1变成0，0变成1)，
//x的其余各位保持不变
using namespace std;
int main(){
    unsigned long x;
    cin>>x;
    int p,n;
    cin>>p>>n;
    unsigned long result;
    result=x^((~(~0UL<<n))<<(p+1-n));
    //~0UL 将所有位设为1（创建全1的掩码）
    //~0UL<<n 将全1掩码左移n位，低位补0
    //~(~0UL<<n)再次取反，得到低n位为1，其余位为0的掩码
    //<<(p+1-n) 将这个掩码左移到目标位置，使得从位置p开始的n位都为1
    //x^()用异或操作翻转这些位（1^1=0, 0^1=1）
    cout<<result<<endl;
    return 0;

}