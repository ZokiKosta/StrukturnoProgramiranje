/*
Да се напише програма која од тастатура чита природен број N, 
а потоа се вчитуваат последователно N тројки цели броеви (три последователни цели броеви) 
(X, Y, Z). За секоја тројка цели броеви X, Y и Z се пресметува изразот:

izraz = max - |Y - max|

кадешто max е најголемиот број од тројката X, Y и Z.

Ако вредноста izraz е помала од max, на излез да се испечати сума од вредноста izraz и 
вредноста izraz на претходната тројка (за првата тројка, претходниот izraz е 0), 
а во спротивно да се испечати max (максималниот од трите броеви) за секоја од тројките броеви, 
во посебни редици, според форматот во примерот.

Објаснување:

-4 2 1 → max = 2, izraz = max - |Y - max| = 2 - |2 - 2| = 2 - 0 = 2, 
izraz не е помал од max, на излезот е вредноста на max, 2.

5 1 3 → max = 5, izraz = max - |Y - max| = 5 - |1 - 5| = 5 - 4 = 1, 
izraz е помал од max, на излезот е сума од тековниот и претходниот izraz, 3.
*/

#include <iostream>

using namespace std;

int max(int x, int y, int z){
    if(x>y){
        if(x>z) return x;
        return z;
    }else{
        if(y>z) return y;
        return z;
    }
}

int main(){
    int n;

    cin>>n;

    int x,y,z;

    int izrazpred = 0;

    for(int i=0; i<n; i++){
        // int izraz = max - abs(y-max);
        cin>>x>>y>>z;
        int maks = max(x,y,z);
        int izraz = maks - abs(y-maks);

        if (izraz < maks){
            cout<<izraz+izrazpred<<endl;
        }else {
            cout<<maks<<endl;
        }
        izrazpred = izraz;
    }
    

    return 0;
}