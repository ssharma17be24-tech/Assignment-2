#include <iostream>
using namespace std;
void missing(){
    int a[5]={1,2,3,4,6};
    int start=a[0];
    for(int i=0;i<5;i++){
        if(a[i]!=start){
            cout<<start;
            break;
        }
        start++;
    }
}
int main() {
    missing();
    
    return 0;
}