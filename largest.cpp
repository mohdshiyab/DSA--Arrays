#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={5,7,8,5,6};
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }    cout<<"The largest element in the array is: "<<largest<<endl;
    return 0;
}