#include <iostream>
using namespace std;
int main() {
    char str[20]="heljkaso";
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    for(int j=0;str[j]!='\0';j++){
        for(int k=j+1;str[k]!='\0';k++){
            if(str[k]<str[j]){
                int t=str[k];            
                str[k]=str[j];
                str[j]=t;
            }
        }
    }
    
    cout<<str;
    return 0;
}