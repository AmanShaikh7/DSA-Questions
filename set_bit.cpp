#include<iostream>
using namespace std;

    int counting(int k) {
        int count =0;
        while(k!=0){
            int last = (k&1);
            if(last==1) {
                count++;
            }
            k=k >> 1;
        }
        return count;
    }
    int SetBit(int num1, int num2) {
        int total_count=0;
        total_count = counting(num1) + counting(num2);
        return total_count;
    }

    int main() {
        int a ,b;
        cin>>a>>b;
        cout<<"The total count of set bit are :"<< " "<<SetBit(a,b);
        return 0;
    }

