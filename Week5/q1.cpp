#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>freq(26,0);
    int n;
    cin>>n;
   char ch;
   for(int i =0;i<n;i++){
    cin>> ch;
    freq[ch - 'a']++  ; 
}
    int maxindex=0;
    for(int i =1;i<26;i++){
        if(freq[i]>freq[maxindex]){
            maxindex = i;
        }
    }
    if(freq[maxindex]<= 1){
        cout<<"no duplicates present ";
    }
    else{
        cout<<(char)('a' + maxindex)<< " - " << freq[maxindex];
    }
    return 0;
}