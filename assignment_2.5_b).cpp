#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    int k=0;
    cout<<"Enter the number of rows";
    cin>>n;
    cout<<endl;
    cout<<"Enter your elements\n";
    for(int i=0; i<(n*(n+1))/2; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<=j){
                cout<<arr[k++];
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
    
}