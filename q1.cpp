#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n; 
        int arr[1000];
        for(int i =0 ; i<n ; i++){
            cin>>arr[i];
        }

        int key;
        cin>>key; 
        
        int comparisons =0;
        bool found =false;

        for (int i = 0;i<n;i++){
            comparisons++;
            if(key==arr[i]){
                found = true;
                break;
            }
        }
        if(found){
            cout<<"number is found and comparisons are: "<<comparisons;
        }
        else{
            cout<<"number is not found " <<comparisons;
        }
    }

    return 0;
}