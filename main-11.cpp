#include <iostream>
using namespace std;

class binaryTree{
private:
    int arr[20], count = 0;
public:
    void add(int data){
        if (count == 20){
            cout<<"Error, array full."<<endl;
        }
        else{
            arr[count]=data;
            count++;
        }
    }
    void Preorder(int n){
        if (n<count){
            cout<<arr[n]<<" ";
            Preorder(2*n +1);
            Preorder(2*n +2);
        }
    }
};

int main(){
    binaryTree test;
    test.add(1);
    test.add(2);
    test.add(3);
    test.add(69);
    test.add(5);
    test.add(6);
    test.add(7);
    test.add(420);
    test.add(9);
    test.add(47);
    test.add(99);
    test.add(100);
    test.add(9000);
    test.add(55);
    test.add(2);
    test.add(83);
    test.add(48);
    test.add(21);
    test.add(15);
    test.add(9);
    test.add(73);
    cout<<endl<<"VLR pattern:"<<endl;
    test.Preorder(0);
    cout<<endl<<endl;
}

//FINAL EDIT
