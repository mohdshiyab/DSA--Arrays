#include<iostream>
using namespace std;
int main(){
    int n=5;
int arr[]={1,2,3,4,5};
for(int i=1;i<n;i++){
if(arr[i]>=arr[i-1]){
}
else{

cout<<"The array is not sorted in increasing order."<<endl;
return 0;}
}
cout<<"The array is sorted in increasing order."<<endl;
}