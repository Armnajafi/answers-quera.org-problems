#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(1 <= n <= 100){
        if(n > 1){
            cout << 3;
        }
        else if (n == 1){
            cout << 2;
        }
    }
  
}
