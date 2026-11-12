/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.
*/
#include <iostream>

using namespace std;

int main(){
    int n,x;

    cin>>n>>x;

    n--;
    
    while(n>0){
        bool found = true;
        int x1 = x;
        while(x1>0){
            int n1 = n;
            while(n1>0){
                if(n1%10==x1%10){
                    found = false;
                    break;
                }else{
                    n1/=10;
                }
            }
            x1/=10;
            if(!found){
                break;
            }
        }
        if(found){
            cout<<n<<endl;
            return 0;
        }
        n--;
    }

    return 0;
}