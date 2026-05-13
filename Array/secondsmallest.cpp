#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,12,-1,9,5};
    int small=arr[0];
    int ssmall=__INT32_MAX__;
    for(int i=1;i<5;i++){
        if(small>arr[i]){
            ssmall=small;
            small=arr[i];
        }
        else if(ssmall>arr[i] && small != arr[i]){
            ssmall=arr[i];
        }
    }
    cout<<small<<" "<<ssmall;
}
