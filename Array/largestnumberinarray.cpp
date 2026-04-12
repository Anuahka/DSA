#include<iostream>
using namespace std;
int large(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
return max;
}
int main(){
    int array[6]={12,99,0,-1,101,-1};
    int largest=large(array,6);
    cout<<"this is the largest number"<<" "<<largest;

}