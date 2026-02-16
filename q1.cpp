#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i=1;i<n;i++) {
        cin >> arr[i];
    }

    int comparisons = 0;
    int shifts = 0;

    
    for (int i=1;i<n;i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;          
            if (arr[j] > key) {
                arr[j+1] = arr[j]; 
                shifts++;
                j--;
            } else {
                break;
            }
        }
        arr[j+1] = key; 
    }

    
    for(int i=1;i<n;i++) {
        cout << arr[i];
    }

    cout << "comparisons = " << comparisons << endl;
    cout << "shifts = " << shifts << endl;

    return 0;
}
