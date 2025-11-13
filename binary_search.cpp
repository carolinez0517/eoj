#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key;
    int n=sizeof(a)/sizeof(a[0]);
    int low=0; 
    int high=n-1;
    int index=-1;
    while(low<=high){
         int mid=(low+high)/2;
        if(a[mid]==key){
            index=mid;
            break;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else{low=mid+1;}
    }
    if(index==-1)
        cout<<"Not Found"<<endl;
    else
        cout<<"a["<<index<<"]="<<key<<endl;
        return 0;
        
}