/*Од стандарден влез се чита еден природен број n. 
Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.*/

#include <iostream>

using namespace std;

 int zbirDel(int n){
    int zbir=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            zbir+=i;
        }
    }
    return zbir;
}

int main(){
    
    int n;
    cin>>n;
    
    int max;
    bool isFirst=true;
    
    for(int i=1;i<n;i++){
        if(isFirst){
            max=i;
            isFirst=false;
            continue;
        }
        if(zbirDel(i)>max){
            max=i;
        }
    }
    cout<<max<<endl;
    
    return 0;
}