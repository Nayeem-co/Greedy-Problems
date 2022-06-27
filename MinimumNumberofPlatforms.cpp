#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    double arr[] = {9.00, 9.40, 9.50, 11.00, 15.00, 18.00};
    double dep[] = {9.10, 12.00, 11.20, 11.30, 19.00, 20.00};


    sort(arr+0,arr+n);
    sort(dep+0,dep+n);
    int platform = 1;
    int result = 1;
    int i=1, j=0;
    while(i < n && j< n ){
        if(arr[i] <= dep[j]){
            platform++;
            i++;
        }
        else if(arr[i] > dep[j]){
            platform--;
            j++;
        }
        if(platform > result){
            cout<<"usefull"<<endl;
            result = platform;
        }

    }
// cout<<"ifnaifn";


    cout<<result;


    return 0;
}
