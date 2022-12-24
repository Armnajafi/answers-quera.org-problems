#include <iostream>

using namespace std;

int main()
{
    string one , two;
    int len;
    cin>>one>>two;

    for(int i=0;two[i] != NULL; i++){
        len++;
    }
    if(two[len - 1] == one[0]){
        cout<< "YES";
    } else {
        cout<< "NO";
    }
}
