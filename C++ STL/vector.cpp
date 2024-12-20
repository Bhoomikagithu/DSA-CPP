// Used to store 
#include<bits/stdc++.h>
using namespace std;

// Locally 10^5, Globally 10^7 otherwise runtime error
// array and vector both are 0 based
// vector can copy but array can't, we can copy array pointer, it will become same array(they are not different) and changes done by 1 array will change 2nd array too(because pointer will copy not array)
// In vector we can copy and changes done by 2nd vector(copy vector) doesn't impact 1st vector, it will remain same even if we make change in 2nd



void printVec(vector<int> &v){
    cout << "Size : " << v.size() << endl; // TC of size() O(1)
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << endl;
    }
    v.push_back(2); // 
}
int main() {
    // if we (passing vector in function )change value in function like add something so doesn't effect in answer because copy of v2 will go. value change in function not in vector. so no change will appear in answer
    // if we want to pass vector and want that change will reflect so we will pass reference so that copy will not make. Actual vector will pass and we can change accordingly and it'll show
    // also it'll reduce O(n) complaxity  
    vector<int> v;
    v.push_back(7); 
    v.push_back(8);
    v.pop_back(); 

    // can do same with this vector 
    // vector<int> &v2=v;
    vector<int> v2=v; // copy vector TC O(n) because it will take element from vector 1 one by one and copy in v2 like a for loop
    v2.push_back(5);
    printVec(v); // first vector pass to function and display value at last 2 will add 
    printVec(v); // the added 2 will display in this 
    printVec(v2); // sec vector pass, actual vector ele will display
    printVec(v2); // added ele will display
}




/*
void printVec(vector<int> v){
    cout << "Size : " << v.size() << endl; // TC of size() O(1)
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << endl;
    }
    // v.push_back(2); // not effect bec copy will make, sol - reference
}

int main() {
    //vector<int> v; // not give size so iy will be 0 later we can add elements using push_back function
    vector<int> v(10); // size of 10 with no initialization of elements so will be zero
    //vector<int> v(10,3); // size 10, all elements will initialized with 3
    v.push_back(7); // After that push element at 11th so it's not necessary that size is fixed we can add more elements
    v.push_back(8);
    v.pop_back(); // pop last element

    vector<int> v2=v; // copy vector TC O(n) because it will take element from vector 1 one by one and copy in v2 like a for loop
    v2.push_back(5);
    printVec(v);
    // printVec(v); // to see that 2  is add or not but it will not add bec copy will go
    printVec(v2);
}
*/





/*
void printVec(vector<int> v){
    cout << "Size : " << v.size() << endl; // TC of size() O(1)
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " " << endl;
    }
}
int main() {
    vector<int> v;
    int n,x;
    cin >> n; //input size
    for(int i=0; i<n; i++) {
        cin >> x;
        // printVec(v);    to see line by line what is happening in actual with memory we print at every iteration
        v.push_back(x); // TC of push_back O(1)
    }
    printVec(v);
}
*/