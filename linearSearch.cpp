#include<iostream>
using namespace std;
bool search(int arr[],int size,int key) {
    for(int i=0;i<size;i++) {
        if(key==arr[i]) {
            return 1;
        }
    }
    return 0;
}
int main() {
    cout<<"enter the size of array:";
    int n;
    cin>>n;
    
     //start taking the element in the array
    cout<<"enter the elements of array:";
    int arr[10];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the key to find:";
    int key;
    cin>>key;
   
    bool found=search(arr,n,key);
    if(found) {
        cout<<"Key found YES!!!"<<endl;
    }
    else {
        cout<<"Key not found nai hai bhai :(";
    }

    return 0;
}