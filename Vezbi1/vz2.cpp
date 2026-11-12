/*
Од стандарден влез се чита природен број n (1 ≤ n ≤ 20), а потоа се читаат n природни броеви со најмногу 6 цифри.

За секој број се формира нов број така што секоја цифра d се заменува со 9 − d. Водечките нули не се запишуваат, бидејќи резултатот е број.

Програмата треба да ги испечати новите броеви, секој во посебен ред (по редоследот на читање), а потоа збирот на сите нови броеви и најголемиот нов број.

Форматот на излезот мора да биде ист како во примерите.

Пример влез 1:

3
1234 9 905
Пример излез 1:

8765
0
94
Sum: 8859
Largest: 8765
*/
#include <iostream>

using namespace std;

int stepen(int n, int m){
    if(m==0){
        return 1;
    }
    return n * stepen(n,m-1);
}

int main(){
    int n;

    cin>>n;

    int broj,suma=0;
    int max;
    bool isFirst = true;

    for(int i = 0; i < n; i ++){
        cin>>broj;
        int brojrez=0;
        int brojac=0;
        while(broj>0){
            brojrez += (9-(broj%10)) * stepen(10,brojac);
            brojac++;
            broj/=10;
        }
        if(isFirst){
            max = brojrez;
            isFirst = false;
        }else if (brojrez > max) max = brojrez;
        cout<<brojrez<<endl;
        suma+=brojrez;
    }

    cout<<"Sum: "<<suma<<endl;
    cout<<"Largest: "<<max<<endl;

    return 0;
}