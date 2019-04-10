#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string word;
    int n, length;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>word;
    length= word.length();
    if (length>10){
        cout<< word[0]<< length-2<<word[length-1]<<endl;
    };
        
    }
    
    system("pause");

    return 0;
}
