#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void largest(vector<int> &arr){
    int max;
    max=arr[0];
    for(int i=1;i<arr.size();i++){
     if(arr[i]>max) max=arr[i];
    }
    cout<<"largest is:"<<max;
    
}

int main(){
    
    vector<int> arr1={1,35,7,35,457,246,88,6};
    largest(arr1);

    return 0;
}

