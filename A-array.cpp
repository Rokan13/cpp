#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]*arr[j]<0){
                break;

        }
        if(arr[i]*arr[j]>0){
            break;

        }
        if(0*(arr[i]>0)==0){
            break;

        }

    }
  }
int i,j;
     if(arr[i]*arr[j]<0){

            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
        if(arr[i]*arr[j]>0){

            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
        if(0*(arr[i]>0)==0){

            cout<<arr[i]<<" "<<arr[j]<<endl;
        }


}
