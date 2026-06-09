#include<iostream>
using namespace std;
int main(){
int n=5;
int max1,max2;
int arr[]={5,7,8,5,6};
for(int i=0;i<n;i++){
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }
    else {
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 ){
            max2=arr[i];
        }
    }
}
cout<<"The second largest element in the array is: "<<max2<<endl;
return 0;
}
