#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<vector<int>>arrays(n);
for(int i=0;i<n;i++){
int c;
cin>>c;
arrays[i].resize(c);
for(int j=0;j<c;j++){
cin>>arrays[i][j];
}
}
for(int i=n-1;i>=0;i--){
for(int j=arrays[i].size()-1;j>=0;j--){
cout<<arrays[i][j];
if(j!=0)cout<<" ";
}
cout<<"\n";
}
return 0;
}
