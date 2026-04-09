#include<iostream>
using namespace std;
int small(int arr[],int n){
    int min =arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
 int arr[5]={0,3,-1,0,-4};
 int smallest=small(arr,5);
 cout<<"smallest number is"<<smallest;
}