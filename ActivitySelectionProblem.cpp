#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/

struct a
{
    int start;
    int end;
    int z;
    int index;

};


int main(int argc, char const *argv[])
{
    
    int n;
    cout<<"enter the number of activities: ";
    cin>>n;

    cout<<"enter the starting times: ";
    struct a arr[n];
    for(int i=0 ; i< n ; i++){
        cin>>arr[i].start;
    }

    int take[n];

    cout<<"enter the ending time: ";
    for(int i=0; i< n ; i++){
        cin>>arr[i].end;
        arr[i].index = i;
    }


    //sorting the array by ending time
    for(int i=0 ; i< n ; i++){
        for(int j = i+1 ; j< n ; j++){
            if(arr[i].end > arr[j].end){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0 ; i< n ; i++){
        if(take[i] != -1){
            take[i] = 1;

            for(int j=i+1 ; j< n ; j++){
                if(arr[i].end > arr[j].start){
                    take[j] = -1;
                }
            }

        }
    }

    cout<<"result: ";
    for(int i=0 ; i< n ; i++){
        if(take[i] != -1){
            cout<<arr[i].index<<" ";
        }
    }




}
