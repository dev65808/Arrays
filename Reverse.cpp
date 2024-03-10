#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp=0;
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}
int main(){
    int arr[50],size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements to array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array after reverse: ";
    reverse(arr,size);
}