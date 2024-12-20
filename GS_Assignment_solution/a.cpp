#include <bits/stdc++.h>
using namespace std;

void insertElements(vector<int>& arr, vector<int>& elements, vector<int>& positions) {
    if (elements.size() != positions.size()) {
        cout << "Error: The sizes of elements and positions arrays must be the same" << endl;
        return;
    }

    // Loop through each element and position
    for (size_t i = 0; i < elements.size(); i++) {
        // Adjust the position from 1-based to 0-based
        int pos = positions[i] - 1;
        // Insert the element at the adjusted position
        arr.insert(arr.begin() + pos, elements[i]);
        
        // Update positions of the remaining elements to be inserted
        for (size_t j = i + 1; j < positions.size(); j++) {
            if (positions[j] > positions[i]) {
                positions[j]++;
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the initial array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of elements to be inserted: ";
    cin >> m;
    vector<int> elements(m);
    vector<int> positions(m);
    cout << "Enter the elements to be inserted: ";
    for (int i = 0; i < m; i++) {
        cin >> elements[i];
    }

    cout << "Enter the positions at which elements should be inserted: ";
    for (int i = 0; i < m; i++) {
        cin >> positions[i];
    }

    insertElements(arr, elements, positions);
    cout << "Modified array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}