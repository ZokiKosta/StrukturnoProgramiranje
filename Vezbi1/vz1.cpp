/*
Vo nekoj N cifren broj najneznacajnata cifra da se napravi najznacajna, a najznacajnata najneznacajna.
Primer: 
Input
15679
Output
91567
*/

#include <iostream>

using namespace std;

int main(){
    int n;

    cin>>n;

    int posledna = n % 10;

    int temp = n;
    int stepen = 1;

    while(temp>=10){
        stepen*=10;
        temp/=10;
    }

    int sredina = (n%stepen) / 10;

    int rezultat = posledna * stepen + sredina*10 + temp;

    cout<<rezultat;

    return 0;
}