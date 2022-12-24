#include <iostream>
using namespace std;

void loop_cout(int n ,string text);

int main()
{
    int x1 , x2 , res;
    cin >> x1 >> x2;
        if(x1 == x2){
            cout<<"Saal Noo Mobarak!";
        }
        else if(x1 < x2){
            res = x2 - x1;
            loop_cout(res ,"R");
        }
        else if(x1 > x2){
            res = x1 - x2;
            loop_cout(res ,"L");
        }
}
void loop_cout(int n ,string text){
    for(int i=0;i<n;i++){
        cout<<text;
    }
}
