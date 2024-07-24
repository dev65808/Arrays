#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[100],size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements to the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=getSum(arr,size);
    cout<<"Sum of the given : "<<ans;
}