#include<iostream>
using namespace std;
int sumOfElements(int arr[], int n) {
    // initialize sum variable as 0;
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+ arr[i];
    }
    return sum;
}
int main() {
    int size;
    cin>> size;
    int arr[10];
    //getting elements from user 
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"The sum of elements of array is : "<<sumOfElements(arr,size);
    return 0;
}