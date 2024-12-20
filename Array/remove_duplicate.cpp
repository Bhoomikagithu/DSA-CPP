#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Brute force - using set and return unique; TC-O{n log n + n}, SC-O(n)
    // Optimal - Two pointer(more efficient for large array) approach and map(less efficient
    // for large array , TC-O(n), SC-O(n))
    // TC- O(n), SC-O(1) 
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;

        int i = 0;
        for(int j = 1; j<nums.size(); j++) {
            if(nums[j]!=nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};
int main() {
    int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };
    int n = removeDuplicates(arr);

    // Print updated array
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}