#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string letter , letter_baraks;
    getline(cin , letter);
    transform(letter.begin(), letter.end(), letter.begin(), ::tolower);
    letter.erase(remove(letter.begin(), letter.end(), ' '), letter.end());

    for (int i = letter.size() - 1; i>= 0; i--) {
        if (ispunct(letter[i])) {
            letter.erase(i, 1);
        }
    }
    
    for(int j=letter.length() - 1;j>=0;j--){
        letter_baraks += letter[j];
    }

    if(letter_baraks == letter){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
