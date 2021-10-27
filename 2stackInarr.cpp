#include<iostream>
using namespace std;
class twoStacks{
    int size;
    int top1,top2;
    int *arr;
    public:
        twoStacks(int len=10):size(len),top1(-1),top2(size),arr(new int[size]){}

        void push1(int val){
            if(top1<top2-1){
                top1++;
                arr[top1] = val;
            }
            else
                cout<<"Stack Overflow\n";
        }
        void push2(int val){
            if(top1<top2-1){
                top2--;
                arr[top2] = val;
            }
            else
                cout<<"Stack Overflow\n";
        }
        int pop1(){
            int val;
            if(top1>-1){
                val = arr[top1];
                top1--;
            }
            else{
                val = -30000;
            }
            return val;
        }
        int pop2(){
            int val;
            if(top2>size-1){
                val = arr[top2];
                top2++;
            }
            else{
                val = -30000;
            }
            return val;
        }
        void print(){
            for(int i=0;i<10;i++){
                if(i==0)cout<<"Stack1: "<<arr[0]<<" ";
                else if(i==5)cout<<"\nStack2: "<<arr[5]<<" ";
                else cout<<arr[i]<<" ";
            }
            cout<<'\n';
        }
};

int main(){
    twoStacks s;
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push1(5);

    s.push2(6);
    s.push2(7);
    s.push2(8);
    s.push2(9);
    s.push2(10);
    
    s.print();

}