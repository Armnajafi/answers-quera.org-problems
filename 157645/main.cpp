#include <iostream>

using namespace std;

int main()
{
    int p , l , y , res = 0;
    cin>>p>>l>>y;

    for(int i=1;i<=y;i++){
        if(res == 0){
            res += (p * 2) - l;
        } else {
            res = (res * 2) - l;
        }
    }

    cout<< res;
}

