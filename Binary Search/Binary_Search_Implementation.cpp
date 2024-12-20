// Recognize
// Sorted
// Minimize optimal ( maxima )
// Maximize optimal ( minima )
// Optimization (mostly optimize TC of crr code)
// Generally of N <= 10^5 0r sometimes 10^9 or 10^18

// mid = low + (high - low / 2) coz if we have arr of large size ex 100 then if l=80, h=90 then l+h = 170 overflow condition,
// out of arr range, although ans will be still same it only will safe us from overflow condition when l&h are higher value
// ex 80+90 / 2 = 85 ans 80 + (90 - 80 / 2) = 80 + 5 = 85 same 
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binarySearch(a, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}