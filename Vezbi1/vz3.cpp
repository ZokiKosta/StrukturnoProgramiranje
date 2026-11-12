/*
Спортска нараквица го мери пулсот на корисникот при трчање. Од стандарден влез се читаат мерења на пулсот (отчукувања во минута) 
(цели броеви) сè до крајот на влезот.

Правила:

Вредност помала од 30 или поголема од 220 е грешка во мерењето и се игнорира.
Сите останати вредности се валидни.
Програмата треба да испечати: бројот на валидни вредности, 
најголемата и најмалата валидна вредност и колку валидни вредности се поголеми од 100.

Гарантирано е дека барем една вредност е валидна.

Форматот на излезот мора да биде ист како во примерите.

Пример влез:

72 25 130 250 98 101 220 30
Пример излез:

Valid readings: 6
Highest: 220
Lowest: 30
Above 100: 3
*/

#include <iostream>

using namespace std;

int main() {
    
    int otc;

    int valid=0, min,max, gd100=0;

    bool isFirst=true;

    while(cin>>otc){
        if(otc<30 || otc>220){
            continue;
        }else if(otc>100){
            gd100++;
            valid++;
        }else{
            valid++;
        }

        if(isFirst){
            min=otc;
            max=otc;
            isFirst=false;
        }else if(otc>max){
            max=otc;
        }else if(otc<min){
            min=otc;
        }
    }
    cout<<"Valid readings: "<<valid<<endl;
    cout<<"Highest: "<<max<<endl;
    cout<<"Lowest: "<<min<<endl;
    cout<<"Above 100: "<<gd100<<endl;

    return 0;
}