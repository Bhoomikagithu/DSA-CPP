/* Using *max_element ensures a tighter and more efficient search range, reducing the number of iterations in the binary search.
It directly aligns the range with the problem's constraints, avoiding unnecessary computations that arise when using a large 
theoretical maximum like 1e9
*/

// C++ program to illustrate the use of custom
// comparator with std::max_element()
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if the first
// argument have smaller remainder left after
// division with 5
bool comp(int a, int b) {
  return a % 5 < b % 5;
}

int main() {
    vector<int> v = {33, 87, 1, 71};
  
    // Finding the maximum element in given 
    // range of vector
    cout << *max_element(v.begin(), v.end(),
                         comp);
    return 0;
}