#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    string id;
    double score;
    double sum=0.0;
    double scores[105];
    for(int i=0;i<n;i++){
        cin>>id>>score;
        scores[i]=score;
        sum=sum+score;
    }
    double average=sum/n;
    double fangcha=0.0;
    for(int j=0;j<n;j++){
        double single_f=(scores[j]-average)*(scores[j]-average);
        fangcha=fangcha+single_f;
    }
    fangcha=fangcha/n;
    cout<<fixed<<setprecision(2)<<average<<" "<<fangcha<<endl;
    return 0;

}