#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int sortt(vector<int> &arr){
    sort(arr.begin(),arr.end());
    cout<<arr[arr.size()-1];

}

int main(){
 
    vector<int> arr1={1,3,6,3,78,3,2,6};
    vector<int> arr2={245,546,235,8,43,8,8};

  sortt(arr1);
  cout<<endl;
  sortt(arr2);
    
}


