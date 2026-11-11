/*
 Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)

 Input: 12345678 1357
 Output: PAREN
 */
 
#include <iostream>

using namespace std;

int digitNum(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

bool isEquivalent(int x, int y){
    while(x>0){
        if((x/10)%10!=y%10){
            return false;
        }
        x/=100;
        y/=10;
    }
    return true;
}

int main()
{
    int a,b;
    
    cin>>a>>b;
    
    if(a<=0||b<=0){
        cout<<"Invalid input";
        return 0;
    }
    
    if(isEquivalent(a,b)){
        cout<<"PAREN"<<endl;
        return 0;
    }
    
    cout<<"NEPAREN"<<endl;
    
    

    return 0;
}