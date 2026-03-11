#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

 void makeZeorsInlast(vector<int> &arr){
    int back=-1,forw=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
          back=i;
          forw=++i;
          break;
        }
       
    }
    for(int i=back;i<arr.size();i++){
    
        if(arr[forw]!=0){
            //swap
            int temp=arr[back];
            arr[back]=arr[forw];
            arr[forw]=temp;
            back++;
          
        }
        forw++;
       
    }
    
 }
int main()
{
    vector<int> arr1={1,2,9,0,0,7,0,6,0,5,2,0};
    makeZeorsInlast(arr1);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i];
    }
    
    return 0;
}