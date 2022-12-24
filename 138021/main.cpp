#include <iostream>
using namespace std;

void loop_cout(int n ,string text);

int main()
{
    float a , b , res , div;
    cin >> a >> b;
    if(a >= 1 && b >= 1 && a <= 100 && b <= 100){
        if(a > b){ 
            if(a / 2 > b / 2){
                cout<<"YES";
            }
        } else if (b > a){
            if(b / 2 > a / 2){
                cout<<"YES";
            }
        } else if (a == b){
            cout<<"NO";
        }
    }

}
void loop_cout(int n ,string text){
    for(int i=0;i<n;i++){
        cout<<text;
    }
}
