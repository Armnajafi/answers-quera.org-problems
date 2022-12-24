#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float k, n;
    cin >> n >> k;
    if(n >= -2000000 && n <= 2000000 && k >= 0 && k <= 50 ){
        for(int i=0;i<k;i++){
            n /= 2;
        }
        cout<<floor(n);
    }
}

