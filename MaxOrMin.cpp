#include<iostream>
using namespace std;
int getMin(int a[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int getMax(int a[],int size){
    int max=INT32_MIN;
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int a[100],n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements to the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Minimum value is: "<<getMin(a,n)<<endl;
    cout<<"Maximum value is: "<<getMax(a,n)<<endl;
}