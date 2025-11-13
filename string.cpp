#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // 第一个字符串 s1
    char s1[] = "hello";
    cout <<"s1 =" <<s1<<endl;
    cout <<"addr = "<<static_cast<void*>(s1)<<endl;
    cout <<"sizeof s1: "<<sizeof(s1)<<endl;
    
    for(int i=0;i<strlen(s1);i++)
    {cout<<int(s1[i])<< " ";}
    cout<<endl<<endl;

    // 第二个字符串 s2
    char s2[256]="forrest";
    cout<<"s2 = "<<s2<<endl;
    int i = 0;
    while (s2[i]!=0){
        s2[i]=s2[i]+('A'-'a');  // 将小写字母转换为大写
        i++;
    }
    
    cout <<"s2="<<s2<< endl;
    cout <<"addr="<<(void*)s2<<endl;
    cout <<"sizeof s2:"<<sizeof(s2)<< endl;
    
    return 0;
}