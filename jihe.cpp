#include <iostream>
#include<cstring>
using namespace std;
#define MAXN 100
int main(){
    int n, m;
    int A[MAXN], B[MAXN];
    cin>>n>>m;

    for (int i=0;i<n;i++) 
    cin>>A[i];
    for (int i=0;i<m;i++)    //输入A和B
    cin>>B[i];
    for(int i=n-1;i>0;i--){
        int max1=0;
        for(int j=1;j<=i;j++){
            if(A[j]>A[max1]){
                max1=j;
            }
        }
        int temp=A[i];
        A[i]=A[max1];
        A[max1]=temp;
    }
    for(int i=m-1;i>0;i--){
        int max2=0;
        for(int j=1;j<=i;j++){
            if(B[j]>B[max2]){
                max2=j;
            }
        }
        int temp=B[i];
        B[i]=B[max2];
        B[max2]=temp;
    }
//求交集
int C[MAXN];int c=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(A[i]==B[j]){
        C[c++]=A[i];
        break;
        }

    }
}
for(int i=c-1;i>0;i--){
        int max3=0;
        for(int j=1;j<=i;j++){
            if(C[j]>C[max3]){
                max3=j;
            }
        }
        int temp=C[i];
        C[i]=C[max3];
        C[max3]=temp;
    }

//求并集
int D[MAXN];
int d=0;
//先放入A的全部
for(int i=0;i<n;i++) {
    D[d++] = A[i];
}
//再放入B中除去A中的的
for (int j=0;j<m;j++){
    bool exist=false;
        for (int i=0;i<n;i++) {
            if(B[j]==A[i]){
                exist=true;
                break;
            }
        }
        if(!exist) D[d++]=B[j];
}
for(int i=d-1;i>0;i--){ 
    int max4=0;
    for(int j=1;j<=i;j++){
        if(D[j]>D[max4]){
            max4=j;
        }
    }
    int temp=D[i];
    D[i]=D[max4];
    D[max4]=temp;
}
//求差集
int E[MAXN];
int e=0;
for (int i=0;i<n;i++){
    bool exist=false;
        for (int j=0;j<m;j++) {
            if(A[i]==B[j]){
                exist=true;
                break;
            }
        }
        if(!exist) E[e++]=A[i];
}
if(c==0)cout<<"{}" <<endl;
    else {
        cout<<"{";
        for(int i=0;i<c;i++) {
            cout<<C[i];
            if (i!=c-1)cout<<",";
        }
        cout<<"}"<<endl;
    }
if (d==0) cout<<"{}"<<endl;
else {
    cout << "{";
    for (int i=0;i<d;i++){
       cout<<D[i];
      if (i!=d-1) cout<<",";
    }
    cout<<"}"<<endl;
}
if (e==0) cout<<"{}"<<endl;
  else {
    cout << "{";
      for(int i=0;i<e;i++) {
         cout << E[i];
          if (i!=e-1) cout<<",";
        }
        cout<<"}"<<endl;
    }

return 0;
}