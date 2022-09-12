#include<iostream>
using namespace std;

void printArray(int arr[],int size) {
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<endl;
    }
}
void ReverseArray(int arr[],int size) {
    int start=0;
    int end=size-1;
    while(start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

 
}
int main() {
    int arr[5] ={1,2,3,4,5};
   // cout<<"The reverse array is :"<<ReverseArray(arr,5);
   ReverseArray(arr,5);
   printArray(arr,5);
    return 0;
}