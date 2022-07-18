#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] =  {-2, -5, 6, -2, -3, 1, 5, -6};
    int n;
    cin>>n;

    for(int i=0 ; i< 7; i++){
        for(int j= i+1 ; j< 7 ; j++){
            if(arr[i] < arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    // for(int i=0 ; i< n ; i++){
    //     cout<<arr[i]<<endl;
    // }

    int sum = 0;
    for(int i=0 ; i< n ; i++){
        cout<<arr[i]<<" + ";
        sum = sum + arr[i];
    }
    cout<<endl;

    cout<<sum;
    return 0;
}
