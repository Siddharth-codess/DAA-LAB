#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i  =0;i<n;i++){
        cin>> arr[i];
    }

    int target ;
    cin>> target;

    sort(arr.begin(),arr.end());

    int left=0;
    int right =n-1;
    bool found = false;

    while(left<right){
        int sum =arr[left] + arr [ right ];
        if(sum==target){
            cout<<arr[left ]<< " " << arr[right ];
            found =true;
            break;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    if(!found ){
        cout<<"No such element exist ";
    }
    return 0;
}