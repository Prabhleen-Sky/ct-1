// Name : Prabhleen Kaur
// Roll No: 2010990531
//set no : 4
// que no : 1
#include <bits/stdc++.h>
using namespace std;

int minIndex(vector<int> arr, int n){
     unordered_map <int,int> mp;

     for(int i=0;i<n;i++){
        mp[arr[i]] ++;
     }

     for(int i=0;i<n;i++){
        if(mp.count(arr[i]) > 1)
          return i;
     }

     return -1;
}

int main()
{
    // input
    cout<<"enter no of elements in arr"<<endl;
    int n;
    cin>>n;
    
    vector<int> arr;
    cout<<"enter array elemenst"<<endl;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }

    // logic
    int ans = minIndex(arr,n);

    //output
    if(ans != -1) cout<<ans<<endl;
    else cout<<"Invalid Input"<<endl;

    return 0;
}
