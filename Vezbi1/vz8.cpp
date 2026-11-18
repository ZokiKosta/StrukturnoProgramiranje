/**/

#include <iostream>

using namespace std;

int len(int n){
    int len=0;
    while(n>0){
        len++;
        n/=10;
    }
    return len;
}

int stepen(int n, int m){
    if(m==0){
        return 1;
    }
    return n * stepen(n,m-1);
}

int funkcija(int n){
    if(n==1) 
        return 1;

    int dolz = len(n);

    if ( dolz < 2 )
        return n;

    int prvi = n/stepen(10,(dolz-2));
    int posledni = n%100;

    if ((prvi % 2 == 0 && posledni % 2 == 0) ||
        (prvi % 2 != 0 && posledni % 2 != 0)) {
        n = prvi + posledni;
    }

    else {
        n = abs(prvi - posledni);
    }

    return funkcija(n);
}

int main(){
    int n;
    cin>>n;

    cout << funkcija(n);

    return 0;
}