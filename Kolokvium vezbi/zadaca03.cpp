/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
Обратен број е бројот составен од истите цифри, но во обратен редослед 
(на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
 Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).*/

 #include <iostream>

 using namespace std;


 bool uslov(int n){
    int rev = 0;
    int br = 0;
    while(n>0){
        br++;
        int cifra = n%10;
        rev = rev*10 + cifra; 
        n/=10;
    }
    
    if(rev%br==0){
        return true;
    }
    
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    while(n>9){
        if(uslov(n)){
            cout<<n<<endl;
            return 0;
        }
        n--;
        if(n==9){
            cout<<"Nema"<<endl;
            return 0;
        }
    }
    cout<<"Brojot ne e validen"<<endl;
    
    return 0;
}