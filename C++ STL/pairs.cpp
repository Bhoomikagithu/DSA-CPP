// To store value of different data type
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    pair<int, string> p;
    // From user
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second; 
    
    p = make_pair(2, "hii");
    // another way to initialize
    //p = {5, "Hello"};

    // to copy a pair 
    pair<int, string> p1 = p;
    p1.first = 9; // changed first value for p1 variable, p will remain same

    // By reference
    pair<int, string> &p1 = p; // Value at address of p1 will be stored in p now value of p will be change
    p1.first = 9;
    cout << p.first << " " << p.second <<" " << endl;
    cout << "Copy pair" << p1.first << " " << p1.second <<" " << endl;
    
   pair<int, int> array[3];
   array[0] = {1,2};
   array[1] = {2,3};
   array[2] = {3,4};
   swap(array[0], array[2]); // whole pair will swap, no need to swap individually
   for(int i = 0; i < 3; i++) {
    cout << "Array elements : " << array[i].first << " " << array[i].second << " " << endl;
    
   }
}
