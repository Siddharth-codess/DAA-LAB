#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T; 
    
    while(T--){
        int n;
        cin >> n;

        int arr[1000];
        for(int i = 0; i < n; i++){   
            cin >> arr[i];
        }

        int key;
        cin >> key;  
        
        bool found = false;          
        int counter = 0;
        int low = 0;
        int high = n - 1;            

        
        while(low <= high){
            int mid = low + (high - low) / 2;
            counter++;

            if(arr[mid] == key){
                found = true;
                break;
            }
            else if(arr[mid] < key){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        if(found){
            cout << "found " << counter << endl;
        }
        else{
            cout << "not found " << counter << endl;
        }
    }

    return 0;
}




