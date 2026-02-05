#include<iostream>
using namespace std;

// first occurence of key
int firstoccurence (int arr[],int n ,int key){
    int low = 0, high = n-1;
    int result =-1;

    while(low<=high){
        int mid=(low + (high-low))/2;

        if(arr[mid]==key){
            result = mid;
            high = mid-1;
        }
        else if(arr[mid]<key){
            low = mid +1;
        }
        else {
            high = mid -1;
        }
    
    
}
return result;
}

//second occurence of key
int lastoccurence(int arr[] , int n, int key){
    int low = 0;
    int high =n-1;
    int result =-1;
    while(low<=high){
        int mid =(low + (high-low))/2;

        if(arr[mid]==key){
            result=mid;
            low=mid+1;
        }

        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high=mid -1;
        }
    }
    return result ;
}
int main(){
    int n;
    cin>> n ;
    int arr[n];

    for(int i =0; i <n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int first = firstoccurence(arr, n , key);
    if(first == -1){
        cout<<"key not present";
    } 
    else{
        int last = lastoccurence(arr,n,key);
        int count =last - first +1;
        cout<<"total number of ourrence are : "<<count ;
    }



    return 0;
}
