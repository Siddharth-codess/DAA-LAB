#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    sort(arr, arr + n);

    int i = 0, j = 1;
    int count = 0;

    while (j < n) {
        int diff = arr[j] - arr[i];

        if (diff == k) {
            count++;
            i++;
            j++;
        }
        else if (diff < k) {
            j++;
        }
        else {
            i++;
            if (i == j) j++;  
        }
    }

    cout << "number of counts are : " << count << endl;

    return 0;
}
