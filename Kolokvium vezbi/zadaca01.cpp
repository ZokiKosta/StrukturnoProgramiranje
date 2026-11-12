/*(Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). 
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
 да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.)*/

// Zadaca 1

#include <iostream>

using namespace std;

bool Blag(int n){
    int temp = n;
    while(temp>0){
        if(temp%2==1){
            return false;
        }else{
            temp/=10;
        }
    }
    return true;
}

int main()
{
    int n,m;
    int found=false;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(Blag(i)){
            cout<<i<<endl;
            found = true;
            break;
        }
    }
    
    if(!found){
        cout<<"NE"<<endl;
    }

    return 0;
}