// Name : Prabhleen Kaur
// Roll No: 2010990531
//set no : 4
// que no : 2 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // input
    cout<<"enter no of elements in arr"<<endl;
    int n;
    cin>>n;
    
    vector <int> arr;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }

    //logic 
    
    // sorting arr
    sort(arr.begin(), arr.end());
    
    bool flag = true;
    int ans=arr[0];
    int i;
    for(i=0;i<n;i++){
        if(arr[i] != ans){
            flag = false;
            break;
        }
        ans++;
    }
    
    //output
    if(flag == false) 
      cout<<"The array does not contains consecutive integers as element "<<arr[i]<<" is repeated"<<endl;
    else 
      cout<<"The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n-1]<<endl;
    
    return 0;
}

