/*
Од тастатура се вчитуваат броеви m, n и p. 
Да се најдат првите 10 броеви поголеми од m кои ја содржат цифрата n p-пати.

Решението да се имплементира со помош на функција 
countOccurrence(int number, int digit) која прима два аргументи, 
број и цифра, а како резултат враќа колку пати цифрата digit се јавува во бројот number.
*/
#include <iostream>

using namespace std;

int countOccurence(int number, int digit){
    int count = 0;
    while(number>0){
        if(digit==number%10){
            count++;
        }
        number/=10;
    }
    return count;
}

int main(){
    int m,n,p;

    cin>>m>>n>>p;
    m++;

    int brojac = 0;

    while(brojac<10){
        if(countOccurence(m,n)==p){
            brojac++;
            cout<<m<<endl;
        }
        m++;
    }

    return 0;
}