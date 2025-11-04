#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    long long sum = 0;
    int mx = INT_MIN;


    // input + find total sum + max
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] > mx) mx = arr[i];
    }

    bool found = false;
    for(int i = 0; i < n; i++){
        if((sum - arr[i]) % 2 == 0 && (sum - arr[i]) / 2 == mx){

            cout << arr[i] << " ";
            found = true;
        }
    }

    if(!found) cout << 0;
}

