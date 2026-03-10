#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void isArraysorted(vector<int> &arr){
    int i;
   //check if its ascending
    for(i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            //1 2 3 4 7 6
            break;
        }
    }
    if(i==arr.size()-1){
       cout<<"Array is sorted ascending";
       return;
    }

   //check if its descending
    for(i=0;i<arr.size()-1;i++){
        if(arr[i]<arr[i+1]){        
            break;
        }
    }
     if(i==arr.size()-1){
       cout<<"Array is sorted descending";
    return;
    }
    
    cout<<"array is not sorted";
}

int main()
{
    vector<int> arr1={1,2,3,4,6};
    vector<int> arr2={9,8,7,6,5,1};

    isArraysorted(arr1);
    cout<<endl;
    isArraysorted(arr2);
    return 0;
}