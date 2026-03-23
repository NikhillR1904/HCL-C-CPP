#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    rotateArray(arr, k);

    for (int x : arr) cout << x << " ";
}
