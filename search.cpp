#include<iostream>
using namespace std;
int main(){
    int height[]={175,161,162,198,177,198,172,174,180,182};
    int n=sizeof(height)/sizeof(height[0]);
    int index=-1;
    int searchvalue;
    cin>>searchvalue;
    for(int i=0;i<n;i++){
        if(height[i]==searchvalue){
            index=i;
            break;
        }
    }
    if(index==-1){
        cout<<"Not Found"<<endl;
    }
    else
        cout<<"height["<<index<<"]="<<searchvalue;
    return 0;
}