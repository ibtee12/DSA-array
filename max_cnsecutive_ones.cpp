#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void max_Ones(vector<int> arr){
   int cnt=0,max=0;

for(int i=0;i<arr.size();i++){
    if(arr[i]==1){
      cnt++;
    }
    //this last part could have been done using else 
    
    if(arr[i]==0 || i==arr.size()-1){ //this condition is the main part
        if(cnt>max) max=cnt;

        cnt=0;

    } 
    // else{cnt=0; }  max=Math.max(cnt,max)

}
cout<<max;
}
int main(){
    
    vector<int> arr1={0,0,1,1,0,0,1,1,0,1,1,1,0,1,1,1,1,1,0,1};
    max_Ones(arr1);
    return 0;
}
