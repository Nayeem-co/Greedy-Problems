#include<iostream>
using namespace std;

struct activities
{
    char c;
    int profit;
    int deadline;

};


int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter the number of activities: ";
    cin>>n;

    struct activities arr[n];
    cout<<"enter all id: ";
    for(int i=0 ;i< n ; i++){
        cin>>arr[i].c;
    }

    cout<<"enter all deadlines: ";
    for(int i=0 ;i< n ; i++){
        cin>>arr[i].deadline;
    }
    
    cout<<"enters all profits: ";
    for(int i=0 ;i< n ; i++){
        cin>>arr[i].profit;
    }
    
    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i] = 0; 
    }
    

    for(int i=0 ; i < n ; i++){
        for(int j=i+1 ; j < n ; j++){

            if(arr[i].profit < arr[j].profit){
                struct activities temp ;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    

    for(int i=0 ; i< n ; i++){

        for(int j=arr[i].deadline-1 ; j>= 0 ; j--){
            if(result[j] == 0){
                result[j] = (int)arr[i].c;
                break;
            }
        }
    
    
    }
    // because index starts with 0 but index 0 means the deadline 0 too 
    // so result[0] = 0 always
    //result[0] = 0;
    cout<<"the following activites id are: ";


    int x = 0;
    for(int i=0 ; i< n ; i++){
        if(result[i] != 0){
            cout<<(char)result[i]<<" ";
            x++;
        }
    }
    cout<<endl;

    cout<<"result: "<<x<<endl;
    



    return 0;
}
