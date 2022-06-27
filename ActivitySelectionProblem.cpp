#include <bits/stdc++.h>
#include<iostream>
using namespace std;


struct a
{
    int x;
    int y;
    int z;
    int index;

};


int main(int argc, char const *argv[])
{
    cout<<"enter the number of activities :";
    int n;
    cin>>n;
    cout<<endl;
    cout<<"enter the number of activies for the person :";
    int activities;
    cin>>activities;
    cout<<endl;

    struct a arr[n];

    for(int i=0 ; i< n ; i++){
        cin>>arr[i].x;
    }

    for(int i=0 ; i< n ; i++){
        cin>>arr[i].y;
        arr[i].z = arr[i].y - arr[i].x;
        arr[i].index = i;
    }

    //swap manually
    for(int i=0 ; i< n ; i++){
        for(int j=0 ; j< n ; j++){
            if(arr[i].z > arr[i+1].z){
                swap(arr[i],arr[i+1]);
            }
        }
    }


    for(int i=0 ; i< activities ; i++){
        cout<<arr[i].index<<endl;
    }

    return 0;
}
