
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if(x >= 1 && x <= 8 && y >= 1 && y <= 8 ){
        if(x != 8 || y != 8 && x != 1 || y != 1){
            if(x == 7 && y == 7){
                cout << '1' << '\n';
                cout << 2<<' '<<2;
            }
            else if (x == 2 && y == 2){
                cout << '1' << '\n';
                cout << 7<<' '<<7;
            } else {
                cout << '1' << '\n';
                cout << 7<<' '<<7;
            } 
        }
    }
}

