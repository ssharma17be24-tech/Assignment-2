#include <iostream>
using namespace std;
void inversion(int a[]){
    int n =4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j] && i<j){
                cout<<"("<<a[i]<<">"<<a[j]<<")"<<" Inversion"<<endl;
            }
            else{
                cout<<"("<<a[i]<<"<"<<a[j]<<")"<<" Not Inversion"<<endl;
            }
        }
    }
}
int main() {
    int a[4]={2,4,1,3};
    inversion(a);
    return 0;
}