#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    bool found =false;

    for(int k=n-1;k>=n-2 && !found ;k--){
        int i=0;
        int j=n-1;

        while(i<j){
            if(arr[i]+arr[j]==arr[k]){
                cout<<i<<" "<<" "<<j<< k<<endl;
                found =true;
                break;
            }
            else if (arr[i]+arr[j]<arr[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }
    if(!found){
        cout<<" not found";
    }

    return 0;
}