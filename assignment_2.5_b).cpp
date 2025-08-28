#include <iostream>
using namespace std;

int main(){
    int arr[100], n, k=0;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n;
    
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0; i<(3*n)-2; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i==j) || (i==j-1) || (i==j+1)){
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