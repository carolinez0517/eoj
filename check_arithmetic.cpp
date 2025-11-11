#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,a;
    bool check=true;
    int i=0;
    while(cin>>a){
        arr[i]=a;
        i=i+1;
    }
    n=i;
    int d=arr[1]-arr[0];
    for(int j=1;j<n-1;j++){
        if(arr[j+1]-arr[j]!=d){
            check=false;
            break;
        }
    }
    if(check==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}