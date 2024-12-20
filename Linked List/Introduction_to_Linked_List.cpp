#include<bits/stdc++.h>
using namespace std;

class Node{ // struct or class both will work
    public:
    int data; // the data value
    Node* next; // the pointer to the next value

    // constructor
    public:
    Node (int data1, Node* next1){
        data=data1;  // Initialize data with the provided value
        next=next1;  // Initialize next with the provided
    }
    public:
    Node (int data1){
        data=data1;  // Initialize data with the provided value
        next=nullptr;  // Initialize next as null since it's the end of the list

    }
};
int main(){
    vector<int> arr={2,5,8,7};
    // Node x = Node(arr[0], nullptr);
    // Create a pointer 'y' pointing to the Node 'x'
    // Node* y = &x;
    // Print the memory address of the Node 'x' using the pointer 'y'
    // cout << y << '\n';
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
}