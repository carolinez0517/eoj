#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if (ch>='A'&&ch<='Z')
        cout<<int(ch)<<" "<<(ch-'A'+1);
    else
        cout<<int(ch)<<" "<<(ch-'a'+1);
    return 0;
}