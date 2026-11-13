/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, 
тие се наизменично поголеми односно помали една во однос на друга. 
На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:

a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 
(броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. 
Да се испечатат сите цик-цак броеви.
*/
#include <iostream>

using namespace std;

bool zigzag(int n){
    int temp = n;
    bool vrednost;
    bool minatavrednost;
    
    int minata = temp%10;
    temp/=10;
    int tekovna = temp%10;
    
    minatavrednost = tekovna > minata;
    
    minata = tekovna;
    temp /=10;
    
    while(temp>0){
        tekovna = temp%10;
        vrednost = tekovna > minata; 
        
        if(vrednost==minatavrednost){
            return false;
        }
        
        minatavrednost = vrednost;
        minata = tekovna;
        temp/=10;
    }
    return true;
}

int main()
{
    int a;
    
    while(cin>>a){
        if(a>=10 && zigzag(a)){
            cout<<a<<endl;
        }
    }

    return 0;
}

// Staro Resenie

/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, 
тие се наизменично поголеми односно помали една во однос на друга. 
На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:

a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 
(броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. 
Да се испечатат сите цик-цак броеви.
*/

/*
#include <iostream>

using namespace std;

bool zigzag(int n){
    int predhodna = n%10;
    n/=10;

    int tekovna = n%10;
    
    if(tekovna==predhodna){
        return false;
    }
    
    bool pogolema = tekovna > predhodna;

    predhodna = tekovna;
    n/=10;

    while(n>0){
        tekovna = n%10;

        if(tekovna == predhodna){
            return false;
        }

        if((tekovna>predhodna)==pogolema){
            return false;
        }

        pogolema = tekovna > predhodna;
        
        predhodna = tekovna;
        
        n/=10;
    }
    return true;
}

int main(){
    int n;

    while(cin>>n){
        if(n>=10 && zigzag(n))
        cout<< n <<endl;
    }

    return 0;
}
*/
