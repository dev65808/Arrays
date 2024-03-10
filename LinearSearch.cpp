#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[50],size,key;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter elements to the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    bool found=search(arr,size,key);
    if(found){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is absent";
    }
}