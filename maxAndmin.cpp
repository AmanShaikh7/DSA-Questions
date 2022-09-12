#include<iostream>
using namespace std;
int getMin(int arr[], int size) {
    cout<<"Reading array...."<<endl;
    int min= INT32_MAX;
    for(int i=0;i<size;i++) {
        if(arr[i]<min) {
            min =arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int size) {
    cout<<"Reading array...."<<endl;
    int max= INT32_MIN;
    for(int i=0;i<size;i++) {
        if(arr[i]>max) {
            max =arr[i];
        }
    }
    return max;
}
int main() {
    int size;
    cin>> size;
    int arr[100];
    //taking elements of array
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"The maximum Element in array is :"<<getMax(arr,size)<<endl;
    cout<<"The minimum Element in array is :"<<getMin(arr,size)<<endl;
}