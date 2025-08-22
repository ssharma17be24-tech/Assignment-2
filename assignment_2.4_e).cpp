#include <iostream>
using namespace std;
int main() {
    char str[20]="ShaURya";
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    for(int j =0;j!=i;j++){
        if(str[j]>='A'&& str[j]<='Z'){
            str[j]+=32;
        }
    }
    cout<<str;
    return 0;
}